//
//  main.cpp
//  cpp_source
//
//  Created by Scott Thorpe on 10/4/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//
/*
 Polymorphism, virtual functions, abstract class
*/

#include <iostream>
#include "farm.h"

using namespace std;

void voiceOfAnimal(Animal *);
void voiceOfAnimal(Animal &);

int main() {
    
    Animal animal;
    Dog dog;
    Cat cat;
    Cow cow;
    
    cout << animal.getVoice() << endl;
    cout << dog.getVoice() << endl;
    cout << cat.getVoice() << endl;
    cout << cow.getVoice() << endl;
    
    //voiceOfAnimal(&dog);  This is faster and most common
    voiceOfAnimal(dog);
    
    Animal *p = &dog;
    
    cout << p->getVoice() << endl;
    
    return 0;
}
void voiceOfAnimal(Animal *p)
{
    cout << p->getVoice() << endl;
}
void voiceOfAnimal(Animal &p)
{
    cout << p.getVoice() << endl;
}
