/*pseudocode
1) prompt the user to enter a number
2) use a do while loop and take the number inside the do statement
3) add the number to the total value
4) check if(number>0) numPostive++
5) else if(number<0) numNegative++
6) complete while statement while(number!=0)
7) sum total_numbers = numPositive + numNegative
8) calculate the double avg = total / total_numbers;
9) print NumPositive, NumNegative, total and avg
*/


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numPositive = 0, numNegative = 0;
    int number;
    double total = 0;

    cout << "Enter numbers and end with a zero: "<< endl;
    //Enter your code here
    do
    {
        cin>>number;
        total += number;

        if(number > 0) numPositive++;
        else if(number < 0) numNegative++;
    } 
    while(number != 0);

    int total_numbers = numPositive + numNegative;
    double avg = total / total_numbers;
    cout <<  "The number of positive numbers is " << numPositive 
            <<  " and the number of negative numbers is " << numNegative << endl;
    cout << "Total is "<< total << " and the average is "<< avg << endl; 

    return 0;
}
 

/*
input
7 5 3 -3 -2 0
output
Enter numbers and end with a zero: 
The number of positive numbers is 3 and the number of negative numbers is 2
Total is 10 and the average is 2
*/