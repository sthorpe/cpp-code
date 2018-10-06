//
//  people.h
//  cpp_source
//
//  Created by Scott Thorpe on 10/6/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//

#ifndef people_h
#define people_h

class PersonalData
{
private:
    short age;
    int *p;
public:
    void setAge(int);
    PersonalData();
    PersonalData(short); // We can overload a class
    /*
     This function is setting age. If age is lower than 0, then age is 10
    */
    ~PersonalData();
    short getAge() {return age;}
};

#endif /* people_h */
