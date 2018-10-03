/*
    TYPE CASTING
*/

#include <iostream>

using namespace std;

int main()
{
    double var = 5.5;

    int a = 5;
    int b = 7;

    cout << (int) var << endl; // explicit way

    cout << (double)a / b << endl;

    int x = 10; // implicit way of casting
    short y = x; // You can assign the value but it ends up being wrong

    cout << y << endl;

    cout << int(var) << endl; // c version of casting
    cout << static_cast<int>(var) << endl; // c++ way of casting

    char ch = 'k';

    cout << (int)ch << endl;

    return 0;
}
