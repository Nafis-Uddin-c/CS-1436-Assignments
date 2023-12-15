/* pseudocode
1) ask the user to input a file name and take the name in string
2) open that file
3) check if the file exist and then open a output file
4) initialize flag as false
5) use while loop to take data from the input file
6) check a condition inside the loop if the store is greater than 0
7) if so, then check if the flag is false and print the heading in the ouputfile and assign flag as true
8) then check if store is equal to and greater than 1 and equal to 99 or less than that; if so,
   a) check if sales is less than 0 then print that the store is skiped; else print that store number in the output file
   b) initialize star as 0 and calculate the star = sales / 5000
   c) also use a for loop and run it for the star times and print a star every time in the ouputFile
   d) print the newline in the outputFile outside of the for loop
9) else print that the store is not in the range
10) then close the input and output file
11) the inputFile is not exist then print that the file is not exist
*/



#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<"Please enter the input file name."<<endl;
    string file_name;
    cin>>file_name;

    ifstream inputFile;
    inputFile.open(file_name);

    char character = '"';
    //  remmember  cout<<"\"hello\"";

    unsigned int store;
    long long int sales;

    ofstream outputFile;
    if(inputFile)
    {
        outputFile.open("saleschart.txt");

        bool flag = false;
        while(inputFile>>store>>sales)
        {
            if(store > 0)
            {
                if(flag == false)
                {
                    outputFile<<"SALES BAR CHART"<<endl<<"(Each * equals 5,000 dollars)"<<endl;
                    flag = true;
                }
                if((store >= 1 && store <= 99)) 
                {
                    if(sales<0)
                    cout<<"Skipped store #"<<store<<"."<<endl;

                    else
                    {
                        outputFile<<"Store"<<setw(3)<<right<<store<<": "; 
                        long long int star = 0;
                        star = sales/5000;

                        for(long long int i = 0; i<star; i++)
                        {
                            outputFile<<"*";
                        }
                        outputFile<<endl;
                    }
                }

                else
                {
                    cout<<store<<" is not in the range 1 through 99."<<endl;
                }
            }
        }
        
        inputFile.close();
        outputFile.close();
    }

    else
    {
        cout<<character<<file_name<<character<<" could not be opened."<<endl;
    }

    return 0;
}