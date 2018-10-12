//
//  farm.cpp
//  cpp_source
//
//  Created by Scott Thorpe on 10/12/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//

#include "farm.h"

Animal::Animal()
{
    voice = "Default value";
}
Animal::~Animal()
{
    
}
Dog::Dog()
{
    voice = "Bark Bark";
    sign = "D";
}
Dog::~Dog()
{

}
Cat::Cat()
{
    voice = "Meow Meow";
    sign = "C";
}
Cat::~Cat()
{
    
}
Cow::Cow()
{
    voice = "Moooooo";
    sign = "Co";
}
Cow::~Cow()
{
    
}
