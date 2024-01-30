#include "queue.h"


void insertListSort(int* list, int* size, int val){
    int i;
    for(i = 0; i < *size; i++){
        if(list[i] > val){
            break;
        }
    }

    for(int j = *size; j > i; j--) {
        list[j] = list[j - 1];
    }

    list[i] = val;

    (*size)++;
}