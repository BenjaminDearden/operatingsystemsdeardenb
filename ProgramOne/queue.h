#include <stdio.h>
#include <stdlib.h>


typedef struct Queue {
    int front , rear, size;
    unsigned cap;
    int* arrayptr;

} Queue;

Queue* createQueue(unsigned capacity);

int isFull(struct Queue* queue);

int isEmpty(struct Queue* queue);

void insertListSort(int* list, int* size, int val);
/*
Queue implementation inspired by code found here: https://www.geeksforgeeks.org/introduction-and-array-implementation-of-queue/
*/