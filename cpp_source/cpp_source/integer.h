//
//  integer.h
//  cpp_source
//
//  Created by Scott Thorpe on 10/10/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//

#ifndef integer_h
#define integer_h

class Integer
{
    int nr;
public:
    Integer() {};
    Integer(int); // Convert constructor
    operator int();
    int operator+=(Integer);
    int getNr() { return nr; };
};

#endif /* integer_h */
