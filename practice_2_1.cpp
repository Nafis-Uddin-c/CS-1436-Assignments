// /*pseudocode
// 1) take a five digit number from the user 
// 2) calculate the first digit = (number/10000)
// 3) calculate the second digit = (number/1000)%10
// 4) calculate the fourth digit = (number%100)/10
// 5) calculate the last digit  = (number%10)
// 6) check the first condition if first digit and last digit are matched then check the second condition
// 7) if second digit and fourth digit are same then print this number is palindrome.
// 8) otherwise print this number is not palindrome
// */


// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cin>>number;

//     int first_digit = number/10000;
//     int second_digit = (number/1000)%10;
//     int fourth_digit = (number%100)/10;
//     int last_digit = number%10;


//     if(first_digit == last_digit)
//     {
//         if(second_digit == fourth_digit)
//         {
//             cout<<number<<" is Palindrome."<<endl;
//         }
//     }

//     else cout<<number<<" is not Palindrome."<<endl;

//     return 0;
// }


// /* 
// input
// 65656
// output
// 65656 is Palindrome.
// */
#include <bits/stdc++.h>
using namespace std;
int main()
{
double d = 4.5;
int i = static_cast<int>(d);
cout<<i<<endl;
int x = 22, y = 8; int z;
double g;
g = (double) x / y;
cout<<g;
x = 1; y = 4; z = 9;
    
    return 0;
}