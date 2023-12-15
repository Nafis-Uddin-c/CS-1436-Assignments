/*pseudocode
1) take input a number from the user as row
2) take a number for column and initialize it as the row value
3) take a loop and run it for the times which the user input
4) take another loop inside of first loop and run it for exact the times that user input
5) decrease one after finishing every loop inside the first loop and print a new line
*/


#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */

   int row;
   cin>>row;
   int column = row;

   for(int i = 1; i<=row; i++)
    {
        for(int j = column; j>=1; j--)
        {
            cout<<"*";
        }

        column--;
        cout<<endl;
    }
   
   return 0;
}




/*

input
7
output
*******
******
*****
****
***
**
*


*/