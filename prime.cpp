/*
    Pointers are ordinary variables that can store variables address
*/

#include <iostream>

using namespace std;

int main()
{
    int var = 5;
    int a = 20;

    cout << &var << endl;

    // int *p; // * here is just to tell the compiler that p is a pointer.

    int *p = &var;

    cout << *p << endl; // Use * on a pointer to get the value

    //*p = 20;
    p = &a;
    *p = 60;
    
    cout << "var: " << var << endl;
    cout << "*p: " << *p << endl;
    cout << "a: " << a << endl;

    int * const p_const = &a; // this is a pointer that has to be initalized when defined, because it cannot change after defining the thing it is pointing to.

    const int * p_2 = &a;

    const int * const p_3 = &a;

    cout << endl << endl << endl;

    int ordinary_var = 10;

    int *ordinary_p = &ordinary_var;

    cout << "ordinary_var: " << ordinary_var << endl; //integer value
    cout << "&ordinary_var: " << &ordinary_var << endl; //address 
    cout << "ordinary_p: " << ordinary_p << endl; //address
    cout << "*ordinary_p: " << *ordinary_p << endl; //integer value from pointed place (ordinary_var)
    cout << "&ordinary_p: " << &ordinary_p << endl; //address of pointer itself

    int ** p_pointing_to_address_of_pointer = &ordinary_p;
    cout << "p_pointing_to_address_of_pointer: " << &p_pointing_to_address_of_pointer << endl; 

    return 0;
}
