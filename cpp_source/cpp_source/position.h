//
//  position.h
//  cpp_source
//
//  Created by Scott Thorpe on 10/8/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//

#ifndef position_h
#define position_h

class Position
{
    int x, y;
public:
    Position(int, int);
    ~Position();
    void getPosition() const;
    void setPosition(int, int);
    friend void setX(Position &, int);
};


#endif /* position_h */
