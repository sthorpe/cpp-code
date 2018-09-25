/* 
  Loops and functions
*/

#include <iostream>
#define PI 3.14

using namespace std;

void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double, double);
double areaTriangle(double, double);
//const double PI = 3.14

int main()
{
    int choice;
    char cont;
    do
    {
        system("cls"); // Clear screen
        initMenu();

        cin >> choice;

        menuDecision(choice);

        do
        {
            cout << "Do you want to try again? (Y/N)" << endl; 
            cin >> cont;
        } while(cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N');

    } while(cont == 'y' || cont == 'Y');

    return 0;
}

void initMenu()
{
    cout << "Enter option: " << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Triangle" << endl;
}

void menuDecision(int choice)
{
    switch(choice)
    {
        double r, a, b, h;
        case 1:
            cout << "What is the radius? " << endl;
            cin >> r;
            areaCircle(r);
            break;
        case 2:
            cout << "Enter the side of the square? " << endl;
            cin >> a;
            areaSquare(a);        
            break;
        case 3:
            cout << "Enter the width and height of a rectangle: " << endl;
            cin >> a >> b;
            areaRectangle(a, b);
            break;
        case 4:
            cout << "What is the base and height of a triangle? " << endl;
            cin >> a >> h;
            areaTriangle(a, h);        
            break;
        default:
            cout << "You didn't choose any of the above options" << endl;
    }
}

double areaCircle(double r)
{
    double result = PI * r * r;

    cout << "The area of a circle that radius is: " << r << " = " << result << endl;

    return result;
}
double areaSquare(double a)
{
    double result = a * a;

    cout << "The area of a square that side is: " << a << " = " << result << endl;

    return result;
}
double areaRectangle(double a, double b)
{
    double result = a * b;

    cout << "The area of a rectangle that first side is " << a << " and whos second side is " << b << " = " << result << endl;

    return result;
}
double areaTriangle(double a, double h)
{
    double result = (1/2.0) * a * h;

    cout << "The area of a triangle that base is " << a << " and height is " << h << " = " << result << endl;

    return result;
}