//
//  test.h
//  cpp_source
//
//  Created by Scott Thorpe on 10/9/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//

#ifndef test_h
#define test_h

class B;

class A
{
public:
    void setSecretValue(B &, int);
};

class B
{
    friend class A;
    int secretValue;
public:
    int getSecretValue() { return secretValue; }
};

#endif /* test_h */
