#include <iostream>
#include <fstream>
#include <stack>
#include <queue>
#include <list>
#include <string>
#include "queueFunc.h"

void printQueue(queue<int> printMe){
    cout << "QUEUE CONTENTS: " << endl;
    while(!printMe.empty()){
        cout << printMe.front() << " ";
        printMe.pop();
    }
    cout << endl;
    return;
}