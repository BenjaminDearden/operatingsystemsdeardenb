#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;

} node_t;

void print_list(node_t * head);

node_t* newNode(int data);

/*
Linked list C implementation taken from https://www.learn-c.org/en/Linked_lists
*/
void enqueueLink(node_t** front, node_t** rear, int data);\

void readFileToList(node_t* node, char* filename);