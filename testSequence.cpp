//
//  main.cpp
//  Homework2
//
//  Created by Audi Liu on 4/16/18.
//  Copyright © 2018 Audi Liu. All rights reserved.
//

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

#include "Sequence.h"
//
int main() {//WTF two main
//    Sequence s;
//    s.insert(0, "a");
//    s.insert(1, "b");
//    s.insert(2, "c");
//    s.insert(3, "b");
//    s.insert(4, "e");
//    assert(s.remove("b") == 2);
//    assert(s.size() == 3);
//    string x;
//    assert(s.get(0, x)  &&  x == "a");
//    assert(s.get(1, x)  &&  x == "c");
//    assert(s.get(2, x)  &&  x == "e");
//    Sequence s;
//    s.insert(0, "dosa");
//    s.insert(1, "pita");
//    s.insert(2, "");
//    s.insert(3, "matzo");
//    assert(s.find("") == 2);
//    s.remove("dosa");
//    assert(s.size() == 3  &&  s.find("pita") == 0  &&  s.find("") == 1  &&
//           s.find("matzo") == 2);

//    Sequence s;
//    assert(s.empty());
//    assert(s.find("laobing") == -1);
//    assert(s.insert("laobing") == 0);
//    assert(s.size() == 1  &&  s.find("laobing") == 0);
//    cout << "Passed all tests" << endl;
//
    Sequence s;
    assert(s.empty());
    assert(s.find(42) == -1);
    assert(s.insert(42) == 0);
    assert(s.size() == 1  &&  s.find(42) == 0);
    cout << "Passed all tests" << endl;

//    Sequence s1;
//    s1.insert(0, "paratha");
//    s1.insert(0, "focaccia");
//    Sequence s2;
//    s2.insert(0, "roti");
//    s1.swap(s2);
//    assert(s1.size() == 1  &&  s1.find("roti") == 0  &&  s2.size() == 2  &&
//           s2.find("focaccia") == 0  &&  s2.find("paratha") == 1);
//


    return 0;
}

//
//    pointer to an array: int* ptr; //don't know if the array is in the stacks or the heap until you implement it in your constructor
//
//    1. declarinng an array of pointers in the stacks:
//    int* array[10]; (datatype giveaname[number])
//
//    2. declaring an array in the heap (which inevitbaly involves a pointer to that array):
//     int* ptr;
//     ptr = new int[3]; (new datatpe[number])

//examples
//    string* ptr = new string[3];
//    ptr[0] = "ji"; //can use the pointer as an array
//    cout << *ptr; // the deferencing operator has the * in front

//    int a(3);
//    int** ptr; ptr is a pointer to an int pointer
//    ptr = new int*[3];
//    ptr[0] = &a;
//    cout << *ptr[0]; //should cout 3




