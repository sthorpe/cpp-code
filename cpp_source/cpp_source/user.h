//
//  user.hpp
//  cpp_source
//
//  Created by Scott Thorpe on 10/8/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//

#ifndef user_hpp
#define user_hpp

class User
{
    int ID;
    static int counter;
public:
    User();
    ~User();
    int getID() { return ID; }
    static int getCounter() { return counter; }
};

#endif /* user_hpp */
