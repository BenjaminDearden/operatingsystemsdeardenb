#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "common_threads.h"

// If done correctly, each child should print their "before" message
// before either prints their "after" message. Test by adding sleep(1)
// calls in various locations.

// You likely need two semaphores to do this correctly, and some
// other integers to track things.

typedef struct __barrier_t {
    sem_t bar;
    sem_t lockA;
    sem_t lockB;
    int finish_thread;
    int total_thread;
    // add semaphores and other information here
} barrier_t;


// the single barrier we are using for this program
barrier_t b;


void barrier_init(barrier_t *b, int num_threads) {
    b->total_thread = num_threads;
    b->finish_thread = 0;
    sem_init(&b->lockA, 0, 0);
    sem_init(&b->lockB, 0, 0);
    sem_init(&b->bar, 0, 1);
    // initialization code goes here
}

void barrier(barrier_t *b) {
    // barrier code goes here
    sem_wait(&b->bar); // Only one thread enters at a time
    b->finish_thread += 1; //Increase threads arrived until all threads arrive
    if(b->finish_thread == b->total_thread){
        for(int i = 0; i < b->total_thread; i++){
            sem_post(&b->lockA); //unlock threads once all thread have arrived
        }
        
    }
    sem_post(&b->bar); // Next thread allowed to come in
    sem_wait(&b->lockA); // thread waits until last thread comes in

    sem_wait(&b->bar); // One thread allowed into following section at a time
    b->finish_thread -= 1; // decrement arrived/finished threads to allow them to continue once all have arrived
    if(b->finish_thread == 0){
        for(int i = 0; i < b->total_thread; i++){
            sem_post(&b->lockB); // Release once all threads complete
        }
    }   

    sem_post(&b->bar); // Next thread allowed through
    sem_wait(&b->lockB); // Wait for all threads to complete
}

//
// XXX: don't change below here (just run it!)
//
typedef struct __tinfo_t {
    int thread_id;
} tinfo_t;

void *child(void *arg) {
    tinfo_t *t = (tinfo_t *) arg;
    printf("child %d: before\n", t->thread_id);
    barrier(&b);
    printf("child %d: after\n", t->thread_id);
    return NULL;
}


// run with a single argument indicating the number of 
// threads you wish to create (1 or more)
int main(int argc, char *argv[]) {
    assert(argc == 2);
    int num_threads = atoi(argv[1]);
    assert(num_threads > 0);

    pthread_t p[num_threads];
    tinfo_t t[num_threads];

    printf("parent: begin\n");
    barrier_init(&b, num_threads);
    
    int i;
    for (i = 0; i < num_threads; i++) {
	t[i].thread_id = i;
	Pthread_create(&p[i], NULL, child, &t[i]);
    }

    for (i = 0; i < num_threads; i++) 
	Pthread_join(p[i], NULL);

    printf("parent: end\n");
    return 0;
}

