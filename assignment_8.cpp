/*
write your psuedocode
1) take a string from the user as input file name
2) initialize the variables
3) open input file
4) use while loop to take the integers from the file until end of the integers
5) increase counts for every integers
6) if count is less than or equal to 20 then add the integers to the total
7) also check if the integer is less than the min value, assign it to the min value
8) also if the integer is greater than the max value, assign it to the max value
9) close the input file and check if count is greater than 20 then assign count is 20
10) calculate average = total/count
11) take another string from the user for output file naming and open that file
12) print the count, average, min and max value 
13) use output<< to print data in the output file and close the file
*/

#include <iostream>
#include <fstream>
#include <string>
#include <climits>
using namespace std;

int main()
{
    ifstream inputFile;
    ofstream outputFile;

    string inputFileName;
    cin>>inputFileName;

    int number, total = 0, count = 0, min = INT_MAX, max = INT_MIN, average;

    inputFile.open(inputFileName);

    while(inputFile>>number)
    {
        count++;
        if(count<=20)
        {
            total += number;
            if(number > max) max = number;
            if(number < min) min = number;
        }
    }

    // Close the file.
    inputFile.close();

    if(count>20) count = 20;
    average = total/count;

   // Get the filename from the user.
    string outputFileName;
    cin>>outputFileName;

   // Open an output file.
    outputFile.open(outputFileName);

   //write the values to the output file
    cout << "count is : " << count << endl;
    cout << "average is : " << average << endl;
    cout << "min is     : " << min << endl;
    cout << "max is     : " << max << endl;

    outputFile << "count is : " << count << endl;
    outputFile << "average is : " << average << endl;
    outputFile << "min is     : " << min << endl;
    outputFile << "max is     : " << max << endl;
    
    outputFile.close();

   return 0;
}

