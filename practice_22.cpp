/* pseudocode
1) declare the function prototype
2) inside the main function take two number from the user 
3) use while loop and check if num1 is less than 1 then prompt wrong and take input again
4) use while loop and check if num2 is less than 1 then prompt wrong and take input again
5) call the gcd() function
6) inside the gcd function initialize Gcd = 1 
    check if(num1>num1) use for loop and run it as long as the value of num2
        inside the lop check if(num1 % i == 0 && num2 % i == 0) assign  Gcd = i
    else check if (num1 % i == 0 && num2 % i == 0)  assign Gcd = i
    and return Gcd

*/


#include <iostream>
using namespace std;

int gcd(int n1, int n2);

int main()
{
   cout<<"Enter two integers: "<<endl;
   int num1, num2;
   cin>>num1>>num2;
   
   while(num1 < 1)
   {
      cout<<"The First value should be greater than zero, Enter integer: "<<endl;
      cin>>num1;
   }
   
    while(num2 < 1) 
   {
      cout<<"The Second value should be greater than zero,Enter integer: "<<endl;
      cin>>num2;
   }
   
   int Gcd = gcd(num1, num2);
   cout<<"The greatest common divisor for "<<num1<<" and "<<num2<<" is "<<Gcd<<endl;
}

int gcd(int num1, int num2)
{
   int Gcd = 1;
   if(num1>num2)
   {
      for(int i = 1; i<=num2; i++)
      {
         if(num1 % i == 0 && num2 % i == 0) Gcd = i;
      }
   }
   
   else 
   {
      for(int i = 1; i<= num1; i++)
      {
         if(num1 % i == 0 && num2 % i == 0) Gcd = i;
      }
   }
   
   return Gcd;
}


