//
//  test.h
//  cpp_source
//
//  Created by Scott Thorpe on 10/10/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//

#ifndef test_hpp
#define test_hpp

class Test
{
public:
    int x;
    int y;
    int *p;
    Test(const Test &); // Copy constructor
    Test(int, int, int);
    ~Test();
};

#endif /* test_h */
