/*pseudocode
1) take start value and end value from the user
2) use setw() to make column perfectly
3) use for loop to print from 1 to 12
4) use setw() to seperate all numbers perfectly
5) use for loop and run it for from the start value to end value 
6) take another loop inside of it to print the multiplication
7) multiply the start value between 1 to 12 and do it until the endvalue
8) use setw() and right to print the output correctly
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int startValue, endValue;
    cout << "Enter the start value: ";
    cin >> startValue;
    cout<<startValue<<endl;
    cout << "Enter the end value: ";
    cin >> endValue;
    cout<<endValue<<endl;
    cout  << "\n               Multiplication Table \n\n"  ;

    // Display the number title
    //cout  << "    |   ";

    cout << setw(5) << "|";         //   5 spaces for '|' default from right side 
    for (int i = 1; i <= 12; i++)
    {
        cout <<setw(4) <<  i;  //  4 spaces for 'i' counting after '|' default right
    }
    cout << endl;
    cout  << "--------------------------------------------------------\n";

    // Display the table body using nested loops
    for(int i = startValue; i<=endValue; i++)
    {
        cout<<setw(4)<<right<<i<<"|";      //  4 spaces for '|' from right side
        for(int j = 1; j<=12; j++)
        {
            cout<<right<<setw(4)<<(i*j);      // 4 spaces for values 
        
        // 3 spaces and single digit, 2 spaces and two digit, 1 space and three digit
        
        }
        cout<<endl;
    }
}


/*
input
4 7
output
Enter the start value: 4
Enter the end value: 7

               Multiplication Table 

    |   1   2   3   4   5   6   7   8   9  10  11  12
--------------------------------------------------------
   4|   4   8  12  16  20  24  28  32  36  40  44  48
   5|   5  10  15  20  25  30  35  40  45  50  55  60
   6|   6  12  18  24  30  36  42  48  54  60  66  72
   7|   7  14  21  28  35  42  49  56  63  70  77  84
*/
    