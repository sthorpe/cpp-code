/*
    Strings and a pointer on a char type
*/

#include <iostream>

using namespace std;

int main()
{    
    string text = "trala"; // t r a l a \0

    /*
    for (int i = 0; i < text.length(); i++)
    {
        cout << text[i] << endl;
    }
    */
   /*
    char ch = text[0];

    cout << ch << endl;

    char characters[5] = "1234";

    cout << characters << endl;

    char characters1[] = "123asdfasdfasdf"; // Compilers in c++ are smart enough to dynamicly allocate

    cout << characters1[0] << endl;
    cout << *(characters1) << endl;

    cout << characters1[1] << endl;
    cout << *(characters1+1) << endl;

    char *p = characters1;

    cout << p[0] << endl;
    cout << *(p) << endl;

    cout << p[1] << endl;
    cout << *(p+1) << endl;
    */

    // char text2[] = text; // Can not assign one type to another. char != string
    const char * text2 = text.c_str(); // You can change a string to char if c_str() method

    cout << text2 << endl;

    char array[] = "here is some text";

    string test = array;

    cout << test << endl;

    const char * a = "this is a test 123434232"; // Cannot change the char

    cout << a << endl;

    char b[] = "This is another test";

    b[0] = 'g';

    cout << b << endl;

    char * const dynamic_array = new char[50];
    dynamic_array[0] = 'k';
    dynamic_array[0] = '\0';
    //dynamic_array = "lalalal";

    cout << dynamic_array << endl;

    delete [] dynamic_array;

    string array_of_string[5] = {"this is a string that will be in all of the elements", "this is a string that will be in all of the elements"};

    cout << array_of_string[0] << endl;
    cout << array_of_string[1] << endl;
    cout << array_of_string[2] << endl;

    return 0;
}
