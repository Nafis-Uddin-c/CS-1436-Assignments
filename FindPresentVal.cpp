/* pseudocode
1) declare the function prototype
2) take the future value from the user and show prompt if user inputs wrong and take that value again
3) take the annual interest rate value from the user and show prompt if user inputs wrong and take that value again
4) call the readYears() function
5) outside the main function write the statement of readYears() function
6) take the year value from the user and show prompt if user inputs wrong and take that value again and return it in the main function
7) inside the main function calculate annual_interest_rate /= 100
8) call the presentValue()  and calculate the present_value = future_value/ pow((1.00+ annual_interest_rate), year) inside 
    that function and return present_value
9) inside the main function call displayResults() and print present_value, future_value, annual_interest_rate and year inside 
    that function obviously using fixed and proper setprecision()

*/


#include <bits/stdc++.h>
using namespace std;

int readYears();
double presentValue(double, double, int);
void displayResults(double, double, double, int);

int main()
{
    cout<<"Enter the future value of the investment: ";
    double future_value;
    cin>>future_value;

    while(future_value <= 0)
    {
        cout<<"The future value must be greater than zero."<<endl;
        cin>>future_value;
    }

    cout<<"Enter the annual interest rate: ";
    double annual_interest_rate;
    cin>>annual_interest_rate;

    while(annual_interest_rate <= 0)
    {
        cout<<"The annual interest rate must be greater than zero."<<endl;
        cin>>annual_interest_rate;
    }

    int year = readYears();
    annual_interest_rate /= 100;
    double present_value = presentValue(future_value, annual_interest_rate, year);
    displayResults(present_value, future_value, annual_interest_rate, year);
    
    return 0;
}

int readYears()
{
    
    cout<<"Enter the whole number of years of the investment: ";
    int year;
    cin>>year;

    while(year <= 0)
    {
        cout<<"The number of years must be greater than zero."<<endl;
        cin>>year;
    }

    return year;
}

double presentValue(double future_value, double annual_interest_rate, int year)
{
    double present_value = future_value/ pow((1.00+ annual_interest_rate), year);
    return present_value;
}

void displayResults(double present_value, double future_value, double annual_interest_rate, int year)
{
    cout <<endl<<"Present value: $" <<fixed<<setprecision(2)<<present_value<<endl;
    cout<<"Future value: $"<<fixed<<setprecision(2)<<future_value<<endl;
    cout<<"Annual interest rate: "<<fixed<<setprecision(3)<<(annual_interest_rate*100)<<"%"<<endl;
    cout<<"Years: "<<year<<endl;
}


/*
input
64433
5.6
12
output
Enter the future value of the investment: Enter the annual interest rate: Enter the whole number of years of the investment: 
Present value: $33507.45
Future value: $64433.00
Annual interest rate: 5.600%
Years: 12
*/