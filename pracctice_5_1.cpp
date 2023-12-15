#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a, b;
   cin>>a>>b;
   
   cout<<"Before invoking the swap function, num1 is "<<a<<" and num2 is "<<b<<endl;
   cout<<"\tInside the swap function"<<endl;
   cout<<"\tBefore swapping a is "<<a<<" b is "<<b<<endl;
   
   a += b;
   b = a - b;
   a = a - b;
   
   cout<<"\tAfter swapping a is "<<a<<" b is "<<b<<endl;
   cout<<"After invoking the swap function, num1 is "<<a<<"  and num2 is "<<b;

   return 0;
}