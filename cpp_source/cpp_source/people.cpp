#include "people.h"
#include <iostream>

using namespace std;

void PersonalData::setAge(int age)
{
    if(age < 0)
        this->age = 0;
    else
        this->age = age;
}
PersonalData::PersonalData()
{
    static int i = 0;
    cout << "This constructor has just been invoked " << ++i << endl;
    age = 10;
    p = new int[5];
}
PersonalData::PersonalData(short age)
{
    cout << "This is a different constructor" << endl;
    this->age = age;
}
PersonalData::~PersonalData()
{
    static int j = 0;
    cout << "This distructor has just been invoked " << ++j << endl;
    //delete [] p;
}
