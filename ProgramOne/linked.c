#include "linked.h"
#include <stdio.h>
#include <stdlib.h>


Node* newNode(int data){

    Node* node = (Node*)malloc(sizeof(Node));
    node->val = data;
    node->next = NULL;
    return node;
}

void pushNode(Node** top, int val){
    Node* node = newNode(val);
    node->next = *top;
    *top = node;
}

void printNodeList(Node* node){
    while(node != NULL){
        printf("%d ", node->val);
        node = node ->next;
    }
    printf("\n");
}

void enqueueLink(Node** front, Node** rear, int data){
    Node* Node = newNode(data);
    if(*rear == NULL){
        *front = *rear = Node;
        return;
    }
    (*rear)->next = Node;
    *rear = Node;
}
