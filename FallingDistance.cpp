/* pseudocode
1) declare the function prototype
2) declare the const value
3) inside the main function call the getSeconds() and inside that function take input the seconds and
    prompt wrong if the value is invalid and take the input again and return seconds
4) inside the main function call the findEarthFallDist() and calculate the Distance_earth = 0.5 * g_earth * pow(seconds, 2)  and return that value
5) call the findMoonFallDist() and inside that function calculate the Distance_moon = 0.5 * g_moon * pow(seconds, 2) and return  that value
6) inside the main function print   distance_earth  and distance_moon  value 
*/

#include <bits/stdc++.h>
using namespace std;

double getSeconds();
double findEarthFallDist(double);
double findMoonFallDist(double);

const double g_earth = 9.81;
const double g_moon = 1.625;

int main()
{
    double seconds = getSeconds();
    double distance_earth = findEarthFallDist(seconds);
    double distance_moon = findMoonFallDist(seconds);
    
    cout<<endl<<"The object traveled "<<fixed<<setprecision(3)<<distance_earth<<" meters in "<<fixed<<setprecision(1)<<seconds<<" seconds on Earth."<<endl;
    cout<<"The object traveled "<<fixed<<setprecision(3)<<distance_moon<<" meters in "<<fixed<<setprecision(1)<<seconds<<" seconds on the Moon."<<endl;
    
    return 0;
}

double getSeconds()
{
    cout<<"Please enter the time of the fall (in seconds): ";
    double seconds;
    cin>>seconds;
    
    while(seconds < 0)
    {
        cout<<"The time must be at least zero."<<endl;
        cin>>seconds;
    }
    
    return seconds;
}

double findEarthFallDist(double seconds)
{
    double Distance_earth = 0.5 * g_earth * pow(seconds, 2);
    return Distance_earth;
}

double findMoonFallDist(double seconds)
{
    double Distance_moon = 0.5 * g_moon * pow(seconds, 2);
    return Distance_moon;
}


/*
input
55 
output
Please enter the time of the fall (in seconds): 
The object traveled 14837.625 meters in 55.0 seconds on Earth.
The object traveled 2457.812 meters in 55.0 seconds on the Moon.
*/