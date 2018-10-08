//
//  user.cpp
//  cpp_source
//
//  Created by Scott Thorpe on 10/8/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//

#include "user.h"

int User::counter = 0;

User::User()
{
    counter++;
    ID = counter;
}
User::~User()
{
    
}
