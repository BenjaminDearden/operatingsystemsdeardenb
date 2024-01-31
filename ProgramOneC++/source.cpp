#include <iostream>
#include <fstream>
#include <stack>
#include <queue>
#include <list>
#include <string>
#include "queueFunc.h"
#include "stackFunc.h"
#include "linkedFunc.h"

using namespace std;
/*
Operating Systems 4811 
Professor Michael Geiger
Benjamin Dearden
1/30/2024
Individual Program One
*/
int main(int argc, char* argv[]){
    queue<int> numQueue; //Standard container for queue
    stack<int> numStack; //Standard container for stack
    list<int> numLink;   //Standard container for linked list
    ifstream file (argv[1]); //Variable for filename taken from command line argument
    string str; //Temp variable for string to int conversion
    int hold; //Temp variable for pushing integer into each container
   
    while(!file.eof()){ //Reads file and pushes numbers into each container
        getline(file, str);
        hold = stoi(str);
        numQueue.push(hold);
        numStack.push(hold);
        numLink.push_front(hold);
    }
    file.close();
    printQueue(numQueue);
    printStack(numStack);
    printSortedList(numLink);

    return 0;
}