//
//  main.cpp
//  cpp_source
//
//  Created by Scott Thorpe on 10/4/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//
/*
 Static variables and functions
 *Tips
    - static variables keep track of the value
    - static functions allow you to access the function without an instance of the class!
 
*/

#include <iostream>
#include "user.h"

using namespace std;

int main() {
    //User a[50];
    //User b;
    
    //cout << a[9].getID() << endl;
    // User::counter = 60;
    cout << User::getCounter() << endl;
    //cout << b.getID() << endl;
    
    return 0;
}

