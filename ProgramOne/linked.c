#include "linked.h"
#include <stdio.h>
#include <stdlib.h>

void print_list(Node * head){
    Node * current = head;

    while(current != NULL){
        printf("%d\n", current->val);
        current = current->next;
    }
}


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

void readFileToList(Node* Node, char* filename){
    FILE* file = fopen(filename , "r");
    int num;
    if(file == NULL){
        printf("Error file not opened\n");
        return; 
    }
    else{
        printf("file opened!\n");
    }
    while(fscanf(file, "%d", &num) == 1){
        printf("scanning\n");
        newNode(num);
        printf("New Node added with val %d\n", Node->val);
    }
    fclose(file);
    return;
}