#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int number;
    cout<<"Enter a whole number [enter 0 to end input]: ";
    cin>>number;
    cout<<number<<endl;
    int sum_pos = 0;
    int product_neg = 1;
    int pos_number = 0;
    int neg_number = 0;
    while(number!=0)
    {
        if(number>0) 
        {
            sum_pos += number;
            pos_number++;
        }
        else 
        {
            product_neg *= number;
            neg_number++;
        }
        cout<<"Enter another whole number [enter 0 to end input]: ";
        cin>>number;
        cout<<number<<endl;
    }
    cout<<endl;
    if(pos_number == 1) cout<<"1 positive number was entered. It was a "<<sum_pos<<"."<<endl<<endl;
    else if(pos_number > 0) cout<<pos_number<<" positive numbers were entered. Their sum was "<<sum_pos<<"."<<endl<<endl;
    else cout<<"No positive numbers were entered."<<endl<<endl;
   if(neg_number>0) cout<<neg_number<<" negative numbers were entered. Their product was "<<product_neg<<".";
   else cout<<"No negative numbers were entered.";
    return 0;
}