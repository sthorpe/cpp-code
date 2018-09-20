#include <iostream>

using namespace std;

class Calculator
{
  public:
    int Calculate(int, int, char);
};

int main()
{
    int x, y, result;
    char oper;

    x = 1;
    y = 3;
    oper = '+';

    cout << "Hello, I'm a calculator" << endl;
    cout << "Please enter num1 operator num2: " << endl;
    cout << "Here's the numbers we are adding x, y and oper: " << x << y << oper << endl;
    
    //cin >> x >> y >> oper;
    Calculator c;
    result = c.Calculate(x, y, oper);
    cout << "Answer: " << result << endl;

    cin.ignore();
    cin.get();
    return 0;
}

int Calculator::Calculate(int x, int y, char oper)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        if (y != 0)
            return x / y;
    default:
        cin >> x >> oper >> y;
        Calculate(x, y, oper);
    };
};