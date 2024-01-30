#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node * next;

} Node;

Node* newNode(int data);

/*
Linked list C implementation taken from https://www.learn-c.org/en/Linked_lists
*/
void enqueueLink(Node** front, Node** rear, int data);\

void pushNode(Node** top, int val);

void printNodeList(Node* node);