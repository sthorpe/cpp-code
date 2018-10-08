//
//  main.cpp
//  cpp_source
//
//  Created by Scott Thorpe on 10/4/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//
/*
 Friend functions
*/

#include <iostream>
#include "position.h"

using namespace std;

void setX(Position &, int);

int main() {
    Position dog(10, 50);
    
    dog.getPosition();
    setX(dog, 500);
    dog.getPosition();
    
    const Position house(100, 200);
    
    house.getPosition();
    //house.setPosition(444, 444);
    //house.getPosition();
    return 0;
}

void setX(Position & obj, int value)
{
    // Position &obj = dog
    obj.x = value;
}
