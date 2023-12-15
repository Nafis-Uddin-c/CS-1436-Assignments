/* psudocode
1) declare the function prototypes
2) take an int array
3) call all the functions and print the total, avg, high_month, 
    low_month and the rainfall values
4) inside the getTotalRainFall() function run a for loop and take the rainfall values input into the 
    array and calculate the  total += rain[i]  and return the total
5) inside the getAverageRainFall() function run a for loop and calculate the  total += rain[i] and return (total/size)
6) inside the getHighestMonth() function assign highRain = rain[0]
    then run a for loop and check if(highRain < rain[i]) then assign highRain = rain[i] 
    and highIndex = i   and return highIndex
7) inside the getLowestMonth() function assign lowRain = rain[0] and 
    run a for loop and check if(lowRain > rain[i])  then assign lowRain = rain[i]  and 
    lowIndex = i   and return lowIndex



*/


#include <iostream>
using namespace std;

//Function Prototype
double getTotalRainFall(double rain[], int size);
double getAverageRainFall(double rain[], int size);
int getHighestMonth(double rain[], int size);
int getLowestMonth(double rain[], int size);

int main() 
{

    int month = 12;
    double thisYear[month]; // Declare the array.

    double total = getTotalRainFall(thisYear, month);
    double avg = getAverageRainFall(thisYear, month);
    int high_month = getHighestMonth(thisYear, month);
    int low_month = getLowestMonth(thisYear, month);

    // Display the statistics.
    cout <<"The total rainfall for this year is " << total<< endl;

    cout<<"The average rainfall for this year is " << avg <<endl;

    cout<<"The month with the highest amount of rain is "<< high_month + 1
    <<" with "<<thisYear[high_month]<<" inches."<<endl;

    cout<<"The month with the lowest amount of rain is "<<low_month + 1
    <<" with "<<thisYear[low_month]<<" inches."<<endl;


   return 0;
}

double getTotalRainFall(double rain[], int size)
{
    double total;

    for(int i = 0; i<size; i++)
    {
        cin>>rain[i];
        total += rain[i];
    }
    
    return total;
}

double getAverageRainFall(double rain[], int size)
{
    double total = 0;

    for(int i = 0; i<size; i++)
    {
        total += rain[i];
    }

    return (total/size);
}

int getHighestMonth(double rain[], int size)
{
    int highIndex, highRain = rain[0];

    for(int i = 0; i<size; i++)
    {
        if(highRain < rain[i]) 
        {
            highRain = rain[i];
            highIndex = i;
        }
    }

    return highIndex;
}

int getLowestMonth(double rain[], int size)
{
    int lowIndex, lowRain = rain[0];

    for(int i = 0; i<size; i++)
    {
        if(lowRain > rain[i]) 
        {
            lowRain = rain[i];
            lowIndex = i;
        }
    }

    return lowIndex;
}


/* 
input
4.4 5.4 6.5 7.4 4.6 6.2 6.4 2.6 4.7 7.5 7.8 5.4
output
The total rainfall for this year is 68.9
The average rainfall for this year is 5.74167
The month with the highest amount of rain is 11 with 7.8 inches.
The month with the lowest amount of rain is 8 with 2.6 inches.
*/