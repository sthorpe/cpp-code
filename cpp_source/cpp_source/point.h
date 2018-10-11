//
//  Point.h
//  cpp_source
//
//  Created by Scott Thorpe on 10/11/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//

#ifndef Point_h
#define Point_h

class Point //base, parent or super class
{
protected:
    int x;
public:
    Point(int = 0);
    ~Point();
    int getX() { return x; }
    void setX(int);
};
class Point2D : public Point // Derived, child or subclass
{
protected:
    int y;
public:
    Point2D(int = 0, int = 0);
    ~Point2D();
    int getY() { return y; }
    void setX(int);
    void setY(int);
    void setXY(int, int);
    
};
class Point3D : public Point2D
{
    
};

#endif /* Point_h */
