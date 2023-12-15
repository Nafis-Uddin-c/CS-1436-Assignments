#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    srand(time(0));
    ofstream outputFile;
    int ran;
    outputFile.open("File1.txt");
    for(int i = 1; i<=100; i++)
    {
        ran = rand()% 51 + 1;
        if(ran%10 == 0) 
        {
            outputFile<<ran<<endl;
        }
        else 
        {
            outputFile<<ran<<" ";   
            cout<<ran<<" ";
        }
    }
    outputFile.close();
    return 0;
}



