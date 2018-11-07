/*
    Preprocessor directives, multi-file project
*/

#include <iostream>
#include "ourfirstlibrary.h"

using namespace std;

#define PI 3.14

void testingIt();

int main()
{
    //showHelp();
    testingIt();
    cout << a << endl;
    return 0;
}

void testingIt()
{
    cout << "Givin it a test" << endl;
}
