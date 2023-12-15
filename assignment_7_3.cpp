/* pseudocode
1) take a number n = 5;
2) run a for loop for n times
3) use two nested for loops
4) first for loop will count spaces and second for loop will count stars
5) increase star by 1 and decrease space by 1
6) print the pattern 
7) use endl to print new line 
*/



#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   int n = 5; 
   int space = 4;
   int star = 1;

   for(int i = 1; i<= n; i++)
   {
        for(int j = space; j>=1; j--)
        {
            cout<<" ";
        }
        for(int j = star; j>=1; j--)
        {
            cout<<"*";
        }
        space--;
        star++;
        cout<<endl;
   }

   return 0;
}

/*
input
5
output
*
   **
  ***
 ****
*****

*/