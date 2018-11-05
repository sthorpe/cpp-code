#include <iostream>

using namespace std;
/* Exceptions - handling exceptions */

class DivisionByZeroException
{
public:
    void getErrorMessage() { cout << "Error: do not divide by zero" << endl; }
};

double division(double a, double b) throw(DivisionByZeroException) // Just for information about which exception
{
    if (b == 0)
        throw DivisionByZeroException();
    return a / b;
}
int main()
{
    double a = 5;
    double result;
    try
    {
        result = division(5, 0);
        cout << "The result is " << result << endl;
//        a *= 10;
//        if (a == 50)
//            throw a;
    }
    catch(DivisionByZeroException e)
    {
        e.getErrorMessage();
    }
//    catch(double e)
//    {
//        cout << "a cannot be equal to " << a << endl;
//    }
//    catch(...)
//    {
//        cout << "this will catch anything " << a << endl;
//    }
    
    cout << "Yeah it still runs this!" << endl;
    
    return 0;
}


