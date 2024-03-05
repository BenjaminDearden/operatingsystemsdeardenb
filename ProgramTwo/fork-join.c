#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include "common_threads.h"

/*
Benjamin Dearden 
Operating Systems EECE.4811 
Individual Program 2
*/

sem_t s; 

void *child(void *arg) {
    
    printf("child\n");
    sleep(1);
    sem_post(&s);
    // use semaphore here
    return NULL;
}

int main(int argc, char *argv[]) {
    pthread_t p;
    printf("parent: begin\n");
    sem_init(&s, 0, 0);
    Pthread_create(&p, NULL, child, NULL);
    
    sem_wait(&s);
    // use semaphore here
    printf("parent: end\n");
    return 0;
}

