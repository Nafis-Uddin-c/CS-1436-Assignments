/* psudocode
1) declare the function prototype  and  prompt the user to enter the filename
2) take input the input_filename from the user and open the file
3) take a integer array and call file function including inputFile  with other arguments
4) inside the file() function read the file using while loop and move those value to the array writing
    integer_array[i] = integers   and incrementing the operator
5) close the inputFile and check if(i < 10)  then show the file hasn't enough numbers and exit(0) the program
6) after calling the file() inside the main function, prompt the user to input the outputFilename and take input that
7) open that file and call the reverse() and inside that function run a for loop and 
    initialize operator i = 0, j = size-1, and use condition i<j and increment the i by 1 and decrement j by 1
    inside the for loop write the following statements:
        int tmp = reverse_array[i];
        reverse_array[i] = reverse_array[j];
        reverse_array[j] = tmp;
8) at the main function run a for loop and print the array in the program as well as the file and then close the output file

*/


#include <iostream>
#include <fstream>
#include <string>
#include <climits>
using namespace std;

//prototype
void file(ifstream &, int [], int);
void reverse(int [], int);

const int SIZE = 10;

int main()
{
    cout<<"Enter the filename: "<<endl;

    string input_filename, output_filename;
    cin>>input_filename;

    ifstream inputFile;
    inputFile.open(input_filename);

    int integer_array[SIZE];
    file(inputFile,integer_array, SIZE);

    cout<<"Enter the output filename: "<<endl;
    cin>>output_filename;

    ofstream outputFile;
    outputFile.open(output_filename);

    reverse(integer_array, SIZE);

    cout<<"The reversal of the input is ";

    for(int i = 0; i<10; i++)
    {
        cout<<integer_array[i]<<" ";
        outputFile<<integer_array[i]<<" ";
    }

    outputFile.close();

    return 0 ;
}

void file(ifstream &inputFile, int integer_array[], int size)
{
    int i = 0, integers;

    while(inputFile >> integers)
    {
        integer_array[i] = integers;
        i++;
    }

    inputFile.close();

    if(i < 10) 
    {
        cout<<"Error: input file does not contain enough numbers"<<endl;
        exit(0);
    }

}

void reverse(int reverse_array[], int size)
{
    for(int i = 0, j = size-1; i<j; i++, j--)
    {
        int tmp = reverse_array[i];
        reverse_array[i] = reverse_array[j];
        reverse_array[j] = tmp;
    }
}