#include <iostream>
#include <fstream>
//using namespace std;
/* Streams */

using namespace std;

int main()
{
    fstream myFileHandler;
    myFileHandler.open("test.txt", ios::out | ios::app);
    
    /*
     ios::in - INPUT - READING
     ios::out - OUTPUT - WRITE TO FILE, if there is no file then create, if there is a filethen truncate it (remove content) unless it occurs with ios::in
     ios::trunc - TRUNCATE - it is truncating the file (cutting everything inside)
     ios::ate - At The End - sets pointer at the end of file - The place of a pointer can be changed in that mode, it is possible to read and write in that mode.
     ios::app - Append - The content is added at the end of file. It is not possible to remove content
     ios::binary - opens the file as a binary file
    */
    
    /*
     DEFAULT  MODE (FLAGS)
     fstream - ios::out | ios::in
    */

    if (myFileHandler.is_open())
    {
        cout << "The file was opened properly" << endl;
        myFileHandler << "This is a test :)/n";
        myFileHandler << "This is a test :)/n";
        
    }
    else
        cout << "The file hasn't been opened properly";
    
    return 0;
}
