#include "stackFunc.h"
#include <stack>
#include <iostream>

using namespace std;

void printStack(stack<int> printMe){
    cout << "STACK CONTENTS: " << endl;
    while(printMe.size() != 0){
        cout << printMe.top() << " ";
        printMe.pop();
    }
    cout << endl;
    return;
}