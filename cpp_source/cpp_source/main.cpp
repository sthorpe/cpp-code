//
//  main.cpp
//  cpp_source
//
//  Created by Scott Thorpe on 10/4/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//
/*
 Data Structres
*/

#include <iostream>

using namespace std;

struct personalData
{
    string name;
    string surname;
    string telephoneNumber;
    short age;
}a,b;

void test(personalData *);

int main() {
    
    personalData person[5];
    a.age = 10;
    person[0].name = "Scott";
    person[1].name = "Ralph";
    person[0].surname = "sthorpe";
    person[0].telephoneNumber = "3855555555";
    person[0].age = 38;
    
    cout << person[0].name << endl;
    cout << person[0].surname << endl;
    cout << person[0].telephoneNumber << endl;
    cout << person[0].age << endl;
    
    cout << (*person).name << endl;
    cout << (*(person+1)).name << endl;
    cout << (*&person[0]).name << endl;
    cout << person -> name << endl;
    cout << (person+1) -> name << endl;
    
    cout << a.age << endl;
    
    personalData *p = &person[0];
    
    cout << p -> age << endl;
    
    test(p);
    
    cout << p->name << endl;
    
    return 0;
}
void test(personalData *person)
{
    person -> name = "Caitlin";
}
