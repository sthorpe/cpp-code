//
//  test.cpp
//  cpp_source
//
//  Created by Scott Thorpe on 10/10/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//

#include "test.h"

Test::Test(int x, int y, int value)
{
    this->x = x;
    this->y = y;
    this->p = new int(value);
}
Test::~Test()
{
    delete p;
}
Test::Test(const Test & obj) // Copy constructor. its used for pointers in classes
{
    this->p = new int(*(obj.p));
    this->x = obj.x;
    this->y = obj.y;
}
