#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream inputFile;
    inputFile.open("C:\\Users\\nxu220005\\New folder\\output.txt");

    string character;
    if(inputFile)
    {
        while(inputFile>>character)
        {
            cout<<character;
        }
        inputFile.close(); 
    }
    else if(!inputFile)
    cout<<"No file directory"<<endl;

    ofstream outputFile;
    outputFile.open("HEllo.txt");
    cout<<"Hello world. How is going on?";
    outputFile.close();
    return 0;
}