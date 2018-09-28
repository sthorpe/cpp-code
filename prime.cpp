/*
    Name of Array - Pointer
*/

#include <iostream>

using namespace std;

int main()
{
    // double a[3];  Moves in the memory by 8 bytes
    int a[3]; // each slot of the array increments by 4 bytes
    a[0] = 0;
    a[1] = 20;
    a[2] = 40;
    short int zm;
    int * const p = &a[0];

    cout << p << endl;
    cout << a << endl;

    cout << endl << endl << endl;

    cout << &a[0] << endl;
    cout << &a[1] << endl;
    cout << &a[2] << endl;

    cout << endl << endl << endl;

    cout << a << endl;
    cout << a + 1 << endl;
    cout << a + 2 << endl;

    cout << endl << endl << endl;

    cout << *a << endl;
    cout << *(a + 1) << endl;
    cout << *(a + 2) << endl;

    cout << endl << endl << endl;

    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;

    int *p2 = &a[0];

    cout << endl << endl;

    cout << *p2 << endl; // 0
    cout << ++*p2 << endl; // 1
    cout << *++p2 << endl; // 20
    cout << *p2++ << endl; // 20
    cout << *p2 << endl; // 40



    return 0;
}
