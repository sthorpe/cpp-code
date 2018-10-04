/*
    Executing your program from command prompt
*/

#include <iostream>

using namespace std;
void showHelp();

int main(int argc, char *argv[])
{
    // arguments counter
    // cout << argc << endl;

    // arguments values
    // cout << argv[0] << endl;

    for (int i = 0; i < argc; i++)
    {
        if (strcmp(argv[i], "-h") == 0 && i == 1) // && i == 1 will be the correct argument position
            showHelp();
    }
        

    /*
    char a[] = {'a', 'b', 'c', 'd', '\0'};
    char *b = "this is a test";

    char *c[] = {"dog", "cat", "moose"};

    cout << c[0] << endl;

    char x[] = "a";
    char y[] = "a";

    cout << (x == y) << endl;
    cout << (&x[0] == &y[0]) << endl;

    string a1 = "dog";
    string a2 = "dog";

    cout << (a1 == a2) << endl;

    cout << (strcmp(x,y)) << endl; // 0 - variables are the same. 1 - The first string is greater. -1 - The first string is lower.
    */

    return 0;
}
void showHelp()
{
    // INSTRUCTIONS
    cout << "This is an instruction" << endl;
}