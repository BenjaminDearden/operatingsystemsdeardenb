#include "linkedFunc.h"
#include <iostream>
using namespace std;

void printSortedList(list<int> printMe){
    printMe.sort();
    cout << "LIST CONTENTS: " << endl;
    for (auto const& element : printMe){
        cout << element << " ";
    }

    cout << endl;

}

/*Linked list printing function came from: 
https://www.quora.com/How-do-you-sort-a-linked-list-in-C-STL#:~:text=In%20C%2B%2B%20STL%2C%20you%20can,list%3A%3Asort%20member%20function.
One of the comments contained a snippet of the code
I used to go through the list and print each element
*/