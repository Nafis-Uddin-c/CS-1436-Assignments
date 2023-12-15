/* psedocode
1) prompt the user to input the inputFIle and take it and then open that file
2) initialize the variables
3) open the outputFile
4) check if inputFile is exist
    a) use a while loop to take the number from the inputFile
    b) inside the loop check if number is equal to 1 or greater than that and number is equal to 150 or less than that
        a) if so, increase the count_vaild by 1 and add the number to the total_valid
        b) else print those numbers in the outputFile and increase the count_invalid by 1
    c) close the inputFile and outputFile
    d) calculate the count_total = count_invalid + count_valid
    e) calculate the average_valid = total_valid / count_valid    
    f) check if count_valid is equal to 0 print a new line and print the count_total, count_valid, count_invalid, and write the message that file didn't contain any valid values
    g) else print a new line and print the count_total, count_valid, count_invalid, and the average of the valid values (average_valid)
5) else print that the inputFile couldn't be opened

*/


#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    ifstream inputFile;
    cout<<"Enter the input file name."<<endl;
    
    string inputFileName;
    cin>>inputFileName;

    inputFile.open(inputFileName);

    char character = '"';
    double number;

    int count_valid = 0;
    int count_invalid = 0;
    double total_valid = 0;
    double average_valid;

    ofstream outputFile;
    outputFile.open("badvalues.txt");


    if(inputFile)
    {
        while(inputFile>>number)
        {
            if(number >=1 && number <=150)
            {
                count_valid++;
                total_valid += number;
            }

            else 
            {
                outputFile<<setprecision(3)<<fixed<<number<<endl;
                count_invalid++;
            }  
        }

        inputFile.close();
        outputFile.close();

        int count_total = count_invalid + count_valid;
        average_valid = total_valid / count_valid;

        if(count_valid == 0)
        {
            cout<<endl;
            cout<<"Total number of values read: "<<count_total<<endl;
            cout<<"Valid values read: "<<count_valid<<endl;
            cout<<"Invalid values read: "<<count_invalid<<endl;
            cout<<"The file did not contain any valid values."<<endl;
        }

        else
        {
            cout<<endl;
            cout<<"Total number of values read: "<<count_total<<endl;
            cout<<"Valid values read: "<<count_valid<<endl;
            cout<<"Invalid values read: "<<count_invalid<<endl;
            cout<<"The average of the valid numbers read = ";
            cout<<setprecision(2)<<fixed<<average_valid<<endl;
        }
    }
    
    else 
    {
        cout<< "The file " <<character<<inputFileName<<character<<" could not be opened."<<endl;
    }

    return 0;
}