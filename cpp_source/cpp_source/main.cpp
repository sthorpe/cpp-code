//
//  main.cpp
//  cpp_source
//
//  Created by Scott Thorpe on 10/4/18.
//  Copyright © 2018 Scott Thorpe. All rights reserved.
//
/*
 Inheritance between classes
*/

#include <iostream>
#include "point.h"

using namespace std;

void operationOnPoints();

int main() {
    
    operationOnPoints();
    
    return 0;
}
void operationOnPoints()
{
    Point p1(5);
    Point2D p2(9);
    Point2D p3(23, 11);
    p2.setX(99);
    
    cout << p1.getX() << endl;
    cout << p2.getX() << endl;
    cout << p3.getX() << " , " << p3.getY() << endl;
}
