/*psudocode
1) take a number from the user 
2) initialize the sum_pos = 0, product_neg = 1, pos_number = 0, neg_number = 0
3) use a while loop. when entered number is not equal to 0 then go inside of the loop
4) check if number is greater than 0 then add it to the sum_pos value and increase the value of  pos_number 1
5) else multiply the number with the product_neg and increase the value of neg_number 1
6) also print a message inside the loop to enter another whole number and take it as input
7) go outside of the while loop and print a new line
8) if(pos_number == 1) then print there was a positive number entered  and the value of that
9) else if(pos_number > 0) then print there were multiple numbers of positive number entered and print the sum of all
10) else print there was no positive number
11) if(neg_number == 1) then print there was a negetive number entered and print the value of that number
12) else if(neg_number>0) then print there were multiple numbers of negetive number entered and print the product of all numbers
13) else print there was no negetive number entered

*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int number;
    cout<<"Enter a whole number [enter 0 to end input]: ";
    cin>>number;

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

    }

    cout<<endl;
    
    if(pos_number == 1) cout<<"1 positive number was entered. It was a "<<sum_pos<<"."<<endl<<endl;

    else if(pos_number > 0) cout<<pos_number<<" positive numbers were entered. Their sum was "<<sum_pos<<"."<<endl<<endl;
   
    else cout<<"No positive numbers were entered."<<endl<<endl;


    if(neg_number == 1) cout<<"1 negative number was entered. It was a "<<product_neg<<"."<<endl;
    
    else if(neg_number>0) cout<<neg_number<<" negative numbers were entered. Their product was "<<product_neg<<"."<<endl;
   
    else cout<<"No negative numbers were entered."<<endl;
   
    return 0;
}


/*
input
5 3 6 0
output
Enter a whole number [enter 0 to end input]: Enter another whole number [enter 0 to end input]: Enter another whole number [enter 0 to end input]: Enter another whole number [enter 0 to end input]: 
3 positive numbers were entered. Their sum was 14.

No negative numbers were entered.
*/


/*
input
5 -3 5 -7 -3 0
output
Enter a whole number [enter 0 to end input]: Enter another whole number [enter 0 to end input]: Enter another whole number [enter 0 to end input]: Enter another whole number [enter 0 to end input]: 
3 positive numbers were entered. Their sum was 14.

No negative numbers were entered.
*/

