/*
pseudocode
1) take a number from the user between 2 to 1000
2) if number is less than 2 or more than 1000 then prompt the user error message
3) else check if that number is matched with the stated number. If that mathces print that number is prime
4) else if mod that number by the stated numbers and check the answer if that is zero or not
5) if answer is not zero then print that number is prime        (answer = number%stated numbers)
6) else print those stated numbers which can divide the number perfectly
*/



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin>>number;
    cout<<"Enter a positive whole number in the range 2 through 1000: "<<endl;

    if(number<2 || number>1000)
    {
        cout<<"Error! "<<number<<" is outside the range 2 through 1000."<<endl;
    }

    else
    {
        if(number == 2 || number == 3 || number == 5 || number == 7 || 
        number == 11 || number == 13 || number == 17 || number == 19 ||
        number == 23 || number == 29 || number == 31)
        {
            cout<<number<<" is prime."<<endl;
        } 

        else if(!(number%2==0 || number%3 == 0 || number %5 == 0 || number %7 == 0 || 
        number %11 == 0 || number%13 == 0 || number%17 == 0 || number%19 == 0 ||  
        number %23 == 0|| number %29 == 0 || number%31 == 0))
        {
            cout<<number<<" is prime.";
        }

        else 
        {
            cout<<number<<" is divisible by:"<<endl;
            
            if(number %2== 0) cout<<2<<endl;
            if(number %3 == 0) cout<<3<<endl;
            if(number %5 == 0) cout<<5<<endl;
            if(number %7 == 0) cout<<7<<endl;
            if(number %11 == 0) cout<<11<<endl;
            if(number %13 == 0) cout<<13<<endl;
            if(number %17 == 0) cout<<17<<endl;
            if(number %19 == 0) cout<<19<<endl;
            if(number %23 == 0) cout<<23<<endl;
            if(number %29 == 0) cout<<29<<endl;
            if(number %31 == 0) cout<<31<<endl;

        }
    }

    return 0;
}


/*
input
445
output
Enter a positive whole number in the range 2 through 1000: 
445 is divisible by:
5
*/

/*
input
45
output
Enter a positive whole number in the range 2 through 1000: 
45 is divisible by:
3
5
*/
