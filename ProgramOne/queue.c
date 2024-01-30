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




void insertListSort(int* list, int* size, int val){
    int i;
    for(i = 0; i < *size; i++){
        if(list[i] > val){
            break;
        }
    }

    for(int j = *size; j > i; j--) {
        list[j] = list[j - 1];
    }

    list[i] = val;

    (*size)++;
}