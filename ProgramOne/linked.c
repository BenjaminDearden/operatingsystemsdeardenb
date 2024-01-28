#include "linked.h"
#include <stdio.h>
#include <stdlib.h>

void print_list(node_t * head){
    node_t * current = head;

    while(current != NULL){
        printf("%d\n", current->val);
        current = current->next;
    }
}


node_t* newNode(int data){

    node_t* node = (node_t*)malloc(sizeof(node_t));
    node->val = data;
    node->next = NULL;
    return node;
}

void enqueueLink(node_t** front, node_t** rear, int data){
    node_t* node = newNode(data);
    if(*rear == NULL){
        *front = *rear = node;
        return;
    }
    (*rear)->next = node;
    *rear = node;
}

void readFileToList(node_t* node, char* filename){
    FILE* file = fopen(filename , "r");
    int num;
    if(file == NULL){
        printf("Error file not opened\n");
        return; 
    }
    while(fscanf(file, "%d", &num) == 1){
        newNode(num);
        printf("New node added with val %d\n", node->val);
    }
    fclose(filename);
    return;

}