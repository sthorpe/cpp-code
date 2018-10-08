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
#include "position.h"

using namespace std;

int main() {
    Position dog(10, 50);
    
    dog.getPosition();
    dog.setPosition(45, 33);
    dog.getPosition();
    
    const Position house(100, 200);
    
    house.getPosition();
    //house.setPosition(444, 444);
    house.getPosition();
    return 0;
}
