/* 
  Loops and functions
  Buffer - temp array
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
bool isValid(string);
bool isValid();

int main()
{
    int choice;
    char cont;
    do
    {
        system("cls"); // Clear screen
        initMenu();

        while(!(cin >> choice))
        {
            // cout << "state before: " << cin.rdstate() << endl;
            cin.clear();
            // cout << "state after: " << cin.rdstate() << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            system("cls");
            initMenu();
            cout << "You just entered the wrong option" << endl;

        }
        
        menuDecision(choice);

        do
        {
            cout << "Do you want to try again? (Y/N)" << endl; 
            cin >> cont;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

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
            do { cout << "What is the radius? " << endl; cin >> r; } while(!isValid());
            areaCircle(r);
            break;
        case 2:
            cout << "Enter the side of the square? " << endl;
            do { cin >> a; } while(!isValid("The side is wrong. Please type it again."));
            areaSquare(a);        
            break;
        case 3:
            cout << "Enter the width and height of a rectangle: " << endl;
            do { cin >> a >> b; } while(!isValid("The width or the height is wrong. Please type it again."));
            areaRectangle(a, b);
            break;
        case 4:
            cout << "What is the base and height of a triangle? " << endl;
            do { cin >> a >> h; } while(!isValid("The base or the height is wrong. Please type it again."));
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
bool isValid(string error_msg)
{
    if(cin.rdstate()) //state is wrong when it is not equal to 0
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        initMenu();
        cout << error_msg << endl;
        return false;
    }

    return true;
}
bool isValid()
{
    if(cin.rdstate()) 
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        initMenu();
        return false;
    }

    return true;    
}