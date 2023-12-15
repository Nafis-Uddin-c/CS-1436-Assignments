/*pseudocode
1) take input from the user for weight and then height
2) define kilograms per pound value and meters per inch value
3) calculate BMI = (weight*KILOGRAMS_PER_POUND)/((height*METERS_PER_INCH)*(height*METERS_PER_INCH))
4) check BMI and compare according to the statement and assign the statement asked in the question
5) print the specific statement for the specific BMI
*/



#include <iostream>
using namespace std;

int main()
{
    // Prompt the user to enter weight in pounds
    double weight;
    cin >> weight;

    // Prompt the user to enter height in inches
    double height;
    cin >> height;

    const double KILOGRAMS_PER_POUND = 0.45359237; // Constant
    const double METERS_PER_INCH = 0.0254; // Constant

    double BMI = (weight*KILOGRAMS_PER_POUND)/((height*METERS_PER_INCH)*(height*METERS_PER_INCH));
    cout<<"BMI is "<<BMI<<endl;

    if(BMI < 16) cout<<"Seriously underweight";
    else if(BMI >= 16 && BMI <= 18) cout<<"Underweight";
    else if(BMI >= 18 && BMI <= 24) cout<<"Normal weight";
    else if(BMI >= 24 && BMI <= 29) cout<<"Overweight";
    else if(BMI >= 29 && BMI <= 35) cout<<"Seriously Over weight";
    else cout<<"Gravely Overweight";

    return 0;
}


/*
input
90 55
output
BMI is 20.9178
Normal weight
*/