/* 
  Overloading functions
*/

#include <iostream>

using namespace std;

int power(int, int);
double power(double, int);

int main()
{
    cout << power(2.5, 3) << endl;
    return 0;
}

int power(int b, int e)
{
    int tmp = b;
    while(e-- > 1)
        b *= tmp;

    return b;
}

double power(double b, int e)
{
    double tmp = b;
    while(e-- > 1)
        b *= tmp;

    return b;
}