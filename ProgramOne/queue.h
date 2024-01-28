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

void enqueue(struct Queue* queue, int item);
/// @brief Reads file contents into queue
/// @param queue queue to fill
/// @param filename name of file with contents
Queue* readFileToQueue(Queue* queue, char* filename);

void printQueue(Queue* queue);
/*
Queue implementation inspired by code found here: https://www.geeksforgeeks.org/introduction-and-array-implementation-of-queue/
*/