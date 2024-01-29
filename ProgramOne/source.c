#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"
#include "linked.h"

int main(int argc, char* argv[])
{
    //Initiliaze variables
    FILE* fptr;
    char line[100];
    char str[] = ".txt";
    char* fileName;
    Node* linkedList;
    //Intiliaze linked list node for queue and stack
    Node* front = NULL;
    Node* rear = NULL;
    Node* top = NULL;
    //Initiliaze empty array for sorted list
    int* list = (int*)malloc(sizeof(int) * 1000);
    int size = 0;

    for(int i = 0; i < argc; i++){
        char *ptr = strstr(argv[i], str);
        if(ptr != NULL){
            fileName = argv[i]; 
            printf("%s\n", fileName);
        }

    }

    fptr = fopen(fileName, "r"); 
    if (fptr == NULL){
        printf("File not found. \n");
        return 1;
    }
    else{
        printf("File Opened!\n");
    }
    //fclose(fptr);
    //Scan file and put contents into the data structures
    int data;
    while (fscanf(fptr, "%d", &data) != EOF){
        enqueueLink(&front, &rear, data);
        pushNode(&top, data);
        insertListSort(list, &size, data);
    }
    fclose(fptr);
    printf("QUEUE CONTENTES:\n");
    printNodeList(front);
    printf("STACK CONTENTS:\n");
    printNodeList(top);
    printf("LIST CONTENTS:\n");
    for(int i = 0; i < size; i++){
        printf("%d ", list[i]);
    }
    printf("\n");

    /*Queue* newQ = createQueue(1000);    
    newQ = readFileToQueue(newQ, fileName);
    printQueue(newQ);
    readFileToList(linkedList, fileName);
    */

    return 0;
}