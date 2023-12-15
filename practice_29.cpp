/* psudocode 
1) take string input for the inputFileName  and open that file
2) take another string input for the outputFileName and open that file also 
3) take a int array and check if inputFile is exist 
    take a while loop and take integers from the file 
    write that statement   counts[integers-1]++
    then close the inputFile
4) if the file isn't exist then print error message 
5) run a for loop and check if(counts[i] > 0)  then print the integers and their counts
6) also print in the output file using outFile<<   
7) close the outputFile


*/



#include <iostream>
#include <fstream>
using namespace std;

int main() 
{

    string inputFileName;
    cin>>inputFileName;
    
    ifstream inputFile;
    inputFile.open(inputFileName);

    string outputFileName;
    cin>>outputFileName;

    ofstream outputFile;
    outputFile.open(outputFileName);

    int integers;
    const int SIZE  = 30;
    int counts[SIZE] = {0};

    if(inputFile)
    {
        while(inputFile >> integers)
        {
            counts[integers-1]++;
        }

        inputFile.close();
    }
    
    else cout<<"Error opening the file."<<endl; 

    for(int i = 0; i<SIZE; i++)
    {
        if(counts[i] > 0)
        {
            cout << (i + 1) << " occurs " << counts[i];
            (counts[i] == 1) ? cout<<" time\n" : cout<<" times" << endl;

            outputFile << (i + 1) << " occurs " << counts[i];
            (counts[i] == 1) ? outputFile <<" time\n" : outputFile <<" times" << endl;
        }
    }

    outputFile.close();

   return 0;
}

