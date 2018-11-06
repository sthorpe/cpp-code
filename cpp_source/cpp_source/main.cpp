#include <iostream>

//using namespace std;
/* Namespaces */

namespace A
{
    int a = 20;
}

namespace B
{
    int a = 60;
}

namespace mySpace
{
    class MyNewLine
    {
        std::string text;
    public:
        MyNewLine(std::string text = "\n\n\n") { this->text = text; }
        std::string toString()
        {
            return text;
        }
    };
    std::ostream & operator<<(std::ostream & out, MyNewLine & obj)
    {
        return out << obj.toString();
    }
    MyNewLine endl;
}

using namespace mySpace;

int main()
{
    int a = 50;
    
    std::cout << a << mySpace::endl;
    std::cout << A::a << std::endl;
    std::cout << B::a << endl;
    return 0;
}


