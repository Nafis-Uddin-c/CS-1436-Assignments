/* pseudocode 
1) declare the function prototype and take the string input for inputFileName
2) take a number input
3) take a integer array of 50 size
4) open the input file and if file exists take integers input from that file and
    if count is less than 50 then move them into the array and increase the count by 1
5) close the input file 
6) if file doesn't exit, print error message and exit(0) the program
7) call the function and inside the function run a for loop
    check if array[i] > number then print the numbers and increase_ greater_than_number by 1 
8) if count_greater_than_number less than 1, print there was no number greater than the number that user input



*/



#include <iostream>
#include <fstream>
using namespace std;

void displayGreaterThan(int array[], int n, int count);

int main() 
{
    string inputFileName;
    cin>>inputFileName;

    char ch = '"';
    int number, integers, Count = 0;
    cin>>number;

    const int SIZE = 50;
    int array[SIZE] = {0};

    ifstream inputFile;  // Input file stream object
    inputFile.open(inputFileName);

    if(inputFile)
    {
        while(inputFile >> integers)
        {
            if(Count < 50)
            {
                array[Count] = integers;
                Count++;
            }
        }

        inputFile.close();
    }

    else 
    {
        cout<<"Error: Failed to open file "<<ch<<inputFileName<<ch<<"."<<endl;
        exit(0);
    }

    displayGreaterThan(array, number, SIZE);

    return 0;
}

void displayGreaterThan(int array[], int number, int SIZE)
{
    int count_greater_than_number = 0;

    for(int i = 0; i<SIZE; i++)
    {
        if(array[i] > number)
        {
            cout<<array[i]<<" ";
            count_greater_than_number++;
        }
        
    }

    cout<<endl;

    if(count_greater_than_number < 1) cout<<"No numbers in array is greater than "<<number<<endl;
}