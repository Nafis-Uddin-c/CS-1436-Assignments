/* pseudocode
1) wrte the function prototypes
2) take a character input and use while loop 
    check the condition if   while(!(t == 'i' || t == 'I' || t == 'o' || t == 'O'))   then that character input again
3) if(t == 'i' || t == 'I')   
    take num_days, daily_rate, medication, and service value from the user
    also check everyone if they are valid. otherwise use while loop to take the valid input again
    call the total_charges() function and inside that function 
    calculate the total = (num_days * daily_rate) + medication + service   and return total  
    and print it inside the if condition
4) else take the service and medication value from the user and check if they are valid. If not then use while loop and 
    take those value again. after that call total_charges() function and inside that function 
    calculate the total = service + medication   and return that and print the total inside the else statement

*/

#include <bits/stdc++.h>
using namespace std;

double total_charges(int num_days, int daily_rate, double medication, double service);
double total_charges(double service, double medication);


int main()
{
    char t;
    cin>>t;

    while(!(t == 'i' || t == 'I' || t == 'o' || t == 'O')) cin>>t;

    int num_days, daily_rate;
    double medication, service, total;

    if(t == 'i' || t == 'I')
    {
        cin>>num_days;
        while(num_days < 0) cin>>num_days;

        cin>>daily_rate;
        while(daily_rate <= 0) cin>>daily_rate;

        cin>>medication;
        while(medication <= 0) cin>>medication;

        cin>>service;
        while(service <= 0)  cin>>service;

        total = total_charges(num_days, daily_rate, medication, service);
        cout<<total<<endl;
    }

    else 
    {
        cin>>service;
        while(service <= 0) cin>>service;

        cin>>medication;
        while (medication <= 0) cin>>medication;
        
        total = total_charges(service, medication);
        cout<<total<<endl;
    }

    return 0;
}

double total_charges(int num_days, int daily_rate, double medication, double service)
{
    double total = (num_days * daily_rate) + medication + service;
    return total;
}

double total_charges(double service, double medication)
{
    double total = service + medication;
    return total;
}


/*
input
m u i -9 0 8 0 850.35 45.68
output
896.03
*/