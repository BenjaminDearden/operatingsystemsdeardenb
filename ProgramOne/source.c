#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"
#include "linked.h"

int main(int argc, char* argv[])
{
    //Initiliaze variables
    FILE* fptr;
    char str[] = ".txt";
    char* fileName;
    //Intiliaze linked list nodes for queue and stack
    Node* front = NULL; //Linked-list front node for the queue 
    Node* rear = NULL;  //Linked list rear node for the queue
    Node* top = NULL;   //Linked list node for top of stack
    int* listToSort = (int*)malloc(sizeof(int) * 1000);  //Initiliaze empty array for sorted list using a pointer
    int size = 0;

    for(int i = 0; i < argc; i++){ // Find file name within command line input
        char *ptr = strstr(argv[i], str);
        if(ptr != NULL){
            fileName = argv[i]; 
            printf("%s\n", fileName);
        }

    }

    fptr = fopen(fileName, "r"); //Check for file open success/failure
    if (fptr == NULL){
        printf("File not found. \n");
        return 1;
    }
    else{
        printf("File Opened!\n");
    }
    
    //Scan file and put contents into the data structures
    int value;
    while (fscanf(fptr, "%d", &value) != EOF){
        enqueueLink(&front, &rear, value);
        pushNode(&top, value);
        insertListSort(listToSort, &size, value);
    }
    fclose(fptr);
    printf("QUEUE CONTENTES:\n");
    printNodeList(front);
    printf("STACK CONTENTS:\n");
    printNodeList(top);
    printf("LIST CONTENTS:\n");
    for(int i = 0; i < size; i++){
        printf("%d ", listToSort[i]);
    }
    printf("\n");

    return 0;
}