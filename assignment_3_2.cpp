/*pseudocode
1) take input from the user
2) calculate the total_bulb_usage = bulb_num * bulb_hours * 30 * bulb_power
3) calculate the total_AC_usage = AC_hours * 30 * AC_power
4) calculate the total_fan_usage = fan_num * fan_hours * 30 * fan_power
5) calculate the total_electricity_usage = ((total_bulb_usage + total_AC_usage + total_fan_usage))
6) calculate the total_electricity_KWH = total_electricity_usage/1000
7) calculate the bulb_perchan = (total_bulb_usage/total_electricity_usage)*100
8) calculate the AC_perchan = (total_AC_usage/total_electricity_usage)*100
9) calculate the fan_perchan = (total_fan_usage/total_electricity_usage)*100
10)calculate the bill = total_electricity_KWH * (unit_price/100)
11)print the total_electricity_KWH, bulb_perchan, AC_perchan, fan_perchan, and bill 
12) use proper setprecision and fixed 

*/



#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double bulb_num, bulb_hours, AC_power, AC_hours, fan_num, fan_hours, unit_price;
    // # of light bulbs: 
    cin>>bulb_num;
    // Average # of hours each bulb is ON in a day: 
    cin>>bulb_hours;
    // AC unit's power: 
    cin>>AC_power;
    // Typical # of hours AC unit is ON in a day:
    cin>>AC_hours;
    // # of FANs: 
    cin>>fan_num;
    // Average # of hours each Fan is ON in a day:
    cin>>fan_hours;
    // Per-unit price of electricity: 
    cin>>unit_price;

    // each bulb consumes 60W and each fan consumes 40W.
    const int bulb_power = 60;
    const int fan_power = 40;

    double total_bulb_usage = bulb_num * bulb_hours * 30 * bulb_power;
    double total_AC_usage = AC_hours * 30 * AC_power;
    double total_fan_usage = fan_num * fan_hours * 30 * fan_power;

    double total_electricity_usage = ((total_bulb_usage + total_AC_usage + total_fan_usage));
    double total_electricity_KWH = total_electricity_usage/1000;

    double bulb_perchan = (total_bulb_usage/total_electricity_usage)*100;
    double AC_perchan = (total_AC_usage/total_electricity_usage)*100;
    double fan_perchan = (total_fan_usage/total_electricity_usage)*100;

    double bill = total_electricity_KWH * (unit_price/100);

    cout<<"Total electricity usage: "<<fixed<<setprecision(0)<<total_electricity_KWH<<" KWH"<<endl;
    cout<<fixed<<setprecision(1);
    cout<<"Bulbs: "<<bulb_perchan<<"%  AC: "<<AC_perchan<<"%  FANs: "<<fan_perchan<<"%"<<endl;
    cout<<"Electricity bill for the month: $  "<<fixed<<setprecision(2)<<bill<<endl;

    return 0;
}


/*
input
3 2 
4 5
3 8 
4.53
output
Total electricity usage: 40 KWH
Bulbs: 26.9%  AC: 1.5%  FANs: 71.6%
Electricity bill for the month: $  1.82
*/