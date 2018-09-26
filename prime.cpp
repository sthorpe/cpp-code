/*
    Reference Variables
    A nickname for a variable
*/

#include <iostream>

using namespace std;

int main()
{
    string name = "Scott";
    cout << "The value of our variable: " << name << " address " << &name << endl;
    const string &nr_6 = name;
    cout << "The value of our variable: " << nr_6 << " address " << &nr_6 << endl;
    name = "Caitlin";
    cout << "The value of our variable: " << nr_6 << " address " << &nr_6 << endl;
    return 0;
}