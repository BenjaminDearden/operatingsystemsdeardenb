#include "queue.h"

Queue* createQueue(unsigned capacity){
     Queue* queue = (struct Queue*)malloc(
        sizeof(struct Queue));
    queue->cap = capacity;
    queue->front = queue->size = 0;

    queue->rear = capacity - 1;
    queue->arrayptr = (int*)malloc(
        queue->cap * sizeof(int));
        return queue;
}

int isFull(struct Queue* queue){
    return (queue->size == queue->cap);
}

int isEmpty(struct Queue* queue){
    return(queue->size == 0);
}

void enqueue(struct Queue* queue, int item){
    if(isFull(queue)){
        return;
    }
    queue->rear = (queue->rear + 1) % queue->cap;
    queue->arrayptr[queue->rear] = item;
    queue->size = queue->size + 1;
    //printf("%d enqueued to queue\n", item);
}

Queue* readFileToQueue(Queue* queue, char* filename){
    FILE* file = fopen(filename, "r");
    int num;
    printf("function entered\n");
    if (file == NULL){
        printf("Error file not opened\n");
        return NULL;
    }

    while(fscanf(file, "%d", &num) == 1){
        enqueue(queue, num);
        printf("Enqueued %d \n", num);
    }

    fclose(file);
    return queue;
}

void printQueue(Queue* queue){
    
    printf("QUEUE CONTENTS: \n");
    printf("%d ", queue->front);
    /*
    while(queue->size != 0){
        printf("%d " , queue->front);
        queue->size = queue->size - 1;
    }
    */
    printf("\n");
    
}