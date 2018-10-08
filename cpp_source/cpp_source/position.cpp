//
//  position.cpp
//  cpp_source
//
//  Created by Scott Thorpe on 10/8/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//

#include "position.h"
#include <iostream>

using namespace std;

Position::Position(int x, int y)
{
    this->x = x;
    this->y = y;
}
Position::~Position()
{
    
}
void Position::getPosition() const
{
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}
void Position::setPosition(int x, int y)
{
    this->x = x;
    this->y = y;
}
