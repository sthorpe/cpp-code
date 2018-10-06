//
//  main.cpp
//  cpp_source
//
//  Created by Scott Thorpe on 10/4/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//
/*
 Classes
*/

#include <iostream>
#include "people.h"

using namespace std;

void test()
{
    // PersonalData person[5];
    PersonalData * pointer = new PersonalData[5];
    
    delete [] pointer;
}

int main() {
    PersonalData person(44);
    PersonalData person1(20);
    
    //person.setAge(-50);
    //person1.setAge(20);
    
    cout << person.getAge() << endl;
    cout << person1.getAge() << endl;
    
    //test();
    
    return 0;
}

