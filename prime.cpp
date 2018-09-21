/*
 Functions
*/

#include <iostream>

using namespace std;

int main()
{
    string tmp;

    cout << "Enter the number: " << endl;
    cin >> tmp;

    bool isNumber = true;

    for (int i = 0; i < tmp.length(); i++)
    {
        cout << tmp[i];
        if (!(tmp[i] >= 48 && tmp[i] <= 57))
        {
            isNumber = false;
            break;
        }
    }

    if (isNumber)
        cout << "Number entered properly " << endl;
    else
        cout << "Number wasn't entered properly " << endl;


}