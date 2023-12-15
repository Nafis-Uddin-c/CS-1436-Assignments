#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin>>number;
    cout<<"Enter a positive whole number in the range 2 through 1000: "<<number<<endl<<endl;
    if(number<2 && number<1000)
    {
        cout<<"Error! 0 is outside the range 2 through 1000.";
    }
    else 
    {
        if(!(number%2==0 || number%3 == 0 || number %5 == 0 || number %7 == 0 || 
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
            if(number %31 == 0) cout<<31;
            
        }
    }
    return 0;
}

//  2, 3, 5, 7, 11, 13, 17, 19, 23, 29, and 31.