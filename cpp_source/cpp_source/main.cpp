#include <iostream>
#include <fstream>
//using namespace std;
/* Streams */

using namespace std;

int main()
{
    fstream myFileHandler;
    myFileHandler.open("test.txt");
    int x;

    if (myFileHandler.is_open())
    {
        cout << "The file was opened properly" << endl;
        myFileHandler << "This is a test :)" << endl;
        myFileHandler.close();
    }
    
    return 0;
}
