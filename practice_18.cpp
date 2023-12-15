/* pseducode 
1) take a decimal from the user
2) initialize divide = decimal
3) use a do while loop 
4) inside the do statement calculate quotient = divide % 16
5) check if(quotient == 10) tmp = 'A'
    if(quotient == 11) tmp = 'B'
    if(quotient == 12) tmp = 'C'
    if(quotient == 13) tmp = 'D'
    if(quotient == 14) tmp = 'E'
    if(quotient == 15) tmp = 'F'
6) if(quotient < 10 ) char tmp = quotient + '0'   and   hex = tmp + hex
7) else  hex = tmp + hex;
8) calculate   divide /= 16;
9) complete while statement with      while(divide != 0)
10) print hex value using setw(4)        

*/


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    // Prompt the user to enter a decimal integer
    int decimal;
    cin >> decimal;

    //write the code for decimal to hex conversion
    int divide = decimal, quotient;
    char tmp;
    string hex;
    do
    {
        quotient = divide % 16;

        if(quotient == 10) tmp = 'A';
        if(quotient == 11) tmp = 'B';
        if(quotient == 12) tmp = 'C';
        if(quotient == 13) tmp = 'D';
        if(quotient == 14) tmp = 'E';
        if(quotient == 15) tmp = 'F';
        if(quotient < 10 ) 
        {
            char tmp = quotient + '0';
            hex = tmp + hex;
        }

        else  hex = tmp + hex;

        divide /= 16;
        
    }
    while(divide != 0);

    // Convert decimal to hex
    cout<<setw(4)<<hex;

    return 0;
}

/* 
input
4943

output
134F
*/

