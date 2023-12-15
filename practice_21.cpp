/* pseudocode
1) declare the function prototype
2) inside the main function take input
3) call the function
4) print the price
5) inside the function calculate the   price = cost +  (cost * (perchantage/100.0))
6) return price
*/

#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double, double);

int main()
{
   double cost, perchantage;
   cin>>cost>>perchantage;
   double price = calculateRetail(cost, perchantage);
   cout<<"The item's retail price is $"<<price;
   
   return 0;
}

double calculateRetail(double cost, double perchantage)
{
   double price = cost +  (cost * (perchantage/100.0));
   return price;
}

/*
input
40 60
output
The item's retail price is $64
*/