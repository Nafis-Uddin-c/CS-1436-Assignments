/*pseudocode
1) take input days from the user
2) when days is less than 1, prompt user to input at least 1 and take that input
3) initialize pennies as 1 and total pay as 0 
4) print the row according to the output using setw() correctly
5) take a loop and run it for input days
6) print days and the pennies value correctly 
7) penies will be changed according to the days pennies*= 2
8) calculate total pay += pennies inside the loop for every days
9) lastly print the total payment for the last days 
10) use setw() to print perfect output 
*/



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int days;
    cin>>days;

    cout<<"For how many days will you work? "<<days<<endl;

    while(days<1)
    {
        cout<<"The number of days must be at least 1."<<endl;
        cin>>days;
        cout<<"Enter the number of days: "<<days<<endl<<endl;
    }
     
    int pennies = 1;
    int total_pay = 0;
    cout<<setw(6)<<left<<"Day"<<setw(19)<<left<<"Pennies Earned"<<endl;

    for(int i = 1; i<=days; i++)
    {
        cout<<setw(6)<<left<<i<<setw(12)<<left<<pennies<<endl;
        total_pay += pennies;
        pennies *= 2;
    }
    
    cout<<endl<<"Total pay: $"<<double(total_pay)/100.0;
    return 0;
}


/*
input
2
output
For how many days will you work? 2
Day   Pennies Earned     
1     1           
2     2           

Total pay: $0.03
*/