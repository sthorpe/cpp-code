//
//  main.cpp
//  cpp_source
//
//  Created by Scott Thorpe on 10/4/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//
/*
 Friend Classes
*/

#include <iostream>
#include "test.h"

using namespace std;

int main() {
    
    B objB;
    A objA;
    
    objA.setSecretValue(objB, 600);
    
    cout << objB.getSecretValue() << endl;

    return 0;
}

