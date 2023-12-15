/* pseudocode
1) declare the function prototype
2) take the input from the user
3) use fixed, setprecision(2) 
4) call the function DrivingCost(car_miles, gas_price, 10) and take the output in double cost and print it
5) call the function cost = DrivingCost(car_miles, gas_price, 50)  and take the output in double cost and print it
6) call the function cost = DrivingCost(car_miles, gas_price, 400)  and take the output in double cost and print it
7) inside the function calculate the   cost = (milesDriven * dollarsPerGallon)/milesPerGallon   and return that
*/

#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

double DrivingCost(double, double, double);

int main() 
{
    double car_miles, gas_price;
    cin>>car_miles>>gas_price;

    cout << fixed << setprecision(2);

    double cost = DrivingCost(car_miles, gas_price, 10);
    cout<<cost<<" ";

    cost = DrivingCost(car_miles, gas_price, 50);
    cout<<cost<<" ";

    cost = DrivingCost(car_miles, gas_price, 400);
    cout<<cost<<endl;

    return 0;
}

double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven)
{
    double cost = (milesDriven * dollarsPerGallon)/milesPerGallon;
    return cost;
}

/*
input
95.0 4.89
output
0.51 2.57 20.59
*/