/*pseudocode
1) use int for the valuables in this program
2) initialize the sum_pos = 0, product_neg = 1, pos_number = 0, neg_number = 0, zero_count = 0
3) use a for loop and run it for 10 times 
4) inside the loop take a number as input from the user 
5) inside the loop use if else and check if(number == 0) increase the value of zero_count by 1
6) else if(number>0) do these calculation sum_pos += number,  pos_number++
7) else  do these calculation product_neg *= number,   neg_number++
8) print the output which asked in the statement and use tab correctlly

*/



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    int sum_pos = 0;
    int product_neg = 1;
    int pos_number = 0;
    int neg_number = 0;
    int zero_count = 0;

    for(int i = 1; i<=10; i++)
    {
        cout<<"Enter whole number "<<i<<": ";
        cin>>number;
        
        if(number == 0) zero_count++;

        else if(number>0) 
        {
            sum_pos += number;
            pos_number++;
        }

        else 
        {
            product_neg *= number;
            neg_number++;
        }

    }
    cout<<endl;
    cout<<"Of the 10 numbers entered:"<<endl;
    cout<<"\t"<<zero_count<<" were 0's."<<endl;
    cout<<"\t"<<neg_number<<" were negative."<<endl;
    cout<<"\t"<<pos_number<<" were positive."<<endl<<endl;

    cout<<"The product of the negative numbers was "<<product_neg<<"."<<endl;
    cout<<"The sum of the positive numbers was "<<sum_pos<<"."<<endl;
    
    return 0;
}


/*
input
4 0 5 1 -12 43 -4 4 -11 0
output
Enter whole number 1: Enter whole number 2: Enter whole number 3: Enter whole number 4: Enter whole number 5: Enter whole number 6: Enter whole number 7: Enter whole number 8: Enter whole number 9: Enter whole number 10: 
Of the 10 numbers entered:
	1 were 0's.
	4 were negative.
	5 were positive.

The product of the negative numbers was 2640.
The sum of the positive numbers was 73.
*/