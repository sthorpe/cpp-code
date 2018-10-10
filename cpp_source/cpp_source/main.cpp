//
//  main.cpp
//  cpp_source
//
//  Created by Scott Thorpe on 10/4/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//
/*
 Convert constructor and overloading operators
*/

#include <iostream>
#include "integer.h"

using namespace std;

int main() {
    //int a = 10;
    //double b = 20;
    
    //cout << (double) a / b << endl;
    
    Integer a(50);// casting double
    int b = (int)a;
    a = 100;
    cout << a.getNr() << endl;
    cout << b << endl;
    
    cout << a + (Integer)b << endl;
    
    a += b; // a = a + b;
    
    cout << a.getNr() << endl;
    
    return 0;
}

