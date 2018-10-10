//
//  integer.cpp
//  cpp_source
//
//  Created by Scott Thorpe on 10/10/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//

#include "integer.h"

Integer::Integer(int nr)
{
    this->nr = nr;
}
Integer::operator int()
{
    return this->nr;
}
int Integer::operator+=(Integer o)
{
    this->nr = o.getNr() + this->nr;
    return this->nr;
}
