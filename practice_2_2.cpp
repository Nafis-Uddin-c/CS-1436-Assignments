/*pseudocode
1) generate a random number using number = rand()% 12+1 which generates a number from 1 to 12
2) use if else to print the month according to the number
*/

#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    srand(time(0));
    int number = rand()% 12 + 1;

    if(number == 1) cout<<"Month is January";
    else if(number == 2) cout<<"Month is February";
    else if(number == 3) cout<<"Month is March";
    else if(number == 4) cout<<"Month is April";
    else if(number == 5) cout<<"Month is May";
    else if(number == 6) cout<<"Month is June";
    else if(number == 7) cout<<"Month is July";
    else if(number == 8) cout<<"Month is August";
    else if(number == 9) cout<<"Month is September";
    else if(number == 10) cout<<"Month is October";
    else if(number == 11) cout<<"Month is November";
    else cout<<"Month is December";

    return 0;
}


/*
output
Month is January
*/