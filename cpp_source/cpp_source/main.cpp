//
//  main.cpp
//  cpp_source
//
//  Created by Scott Thorpe on 10/4/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//
/*
 Copy constructor
*/

#include <iostream>
#include "test.h"

using namespace std;

int main() {
    
    int a = 10;
    int b = a;
    
    a = 60;
    
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    
    Test obj1(50, 100, 60);
    Test obj2 = obj1;
    
    obj2.x = 200;
    *(obj1.p) = 700; // Trying to change a pointers address
    
    cout << "obj1.x " << obj1.x << endl;
    cout << "obj1.p " << *(obj1.p) << endl;
    cout << "obj1.y " << obj1.y << endl << endl;
    
    cout << "obj2.x " << obj2.x << endl;
    cout << "obj2.p " << *(obj2.p) << endl;
    cout << "obj2.y " << obj2.y << endl;

    return 0;
}

