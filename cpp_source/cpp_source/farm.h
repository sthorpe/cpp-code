//
//  farm.h
//  cpp_source
//
//  Created by Scott Thorpe on 10/12/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//

#ifndef farm_h
#define farm_h
#include <iostream>

using namespace std;

class Animal
{
protected:
    string voice;
public:
    Animal();
    ~Animal();
    virtual string getVoice() { return voice; }
};
class Dog : public Animal
{
    string sign;
public:
    Dog();
    ~Dog();
    string getVoice() { return voice +" "+ sign; }
};
class Cat : public Animal
{
    string sign;
public:
    Cat();
    ~Cat();
    string getVoice() { return voice +" "+ sign; }
};
class Cow : public Animal
{
    string sign;
public:
    Cow();
    ~Cow();
    string getVoice() { return voice +" "+ sign; }
};
#endif /* farm_h */
