/*
    Dynamic allocation of memory
*/

#include <iostream>

using namespace std;

int main()
{    
    // int var = 41240;
    /*
    int amount;

    cout << "How many numbers would you like to store in an array? " << endl;
    cin >> amount;

    int *p = new (nothrow) int[amount];

    cout << p << endl;

    if (p != NULL)
    {
        for (int i = 0;i < amount; i++)
        {
            cout << "Enter the " << (i+1) << " number: " << endl;
            cin >> p[i];
        }

        for (int i = 0;i < amount; i++)
        {
            cout << "p [ " << i << " ] = " << p[i] << endl;
        }
    }
    else
        cout << "Not enough memory" << endl;

    */

    // {} <-- keeps local values
    /*
    {
        int *p = new int;

        *p = 50;

        cout << *p << endl;

        delete p;
        p = NULL;
        p = &var;

        if(p != NULL)
        {
            *p = 60;

            cout << *p << endl;
        }
    }

    */
    {
        int *p = new int;

        cout << p << endl;

        delete p;

        p = new int;
        cout << p << endl;

        delete p;
    }

    // cout << "var: " << var << endl;

    // delete []p;
    return 0;
}
