#include "list.h"


void insertListSort(int* frontOfList, int* sizeOfList, int valInserted){
    int i;
    for(i = 0; i < *sizeOfList; i++){
        if(frontOfList[i] > valInserted){
            break; //If value at current index is > than new val break 
        }
    }

    for(int j = *sizeOfList; j > i; j--) { //Shift values left to make room for the new values coming in
        frontOfList[j] = frontOfList[j - 1]; // 
    }

    frontOfList[i] = valInserted; //Current index gets new value after smaller values were shifted left

    (*sizeOfList)++; //Increase size of list to make room for next value
}