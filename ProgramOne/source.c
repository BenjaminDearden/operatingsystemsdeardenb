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
    node_t* linkedList;


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
    fclose(fptr);
    int current;
    Queue* newQ = createQueue(1000);    
    newQ = readFileToQueue(newQ, fileName);
    printQueue(newQ);
    readFileToList(linkedList, fileName);

    return 0;
}