/* pseudocode
1) take a number n = 5;
2) run a for loop for n times
3) use a nested for loops
4) this for loop will count stars
5) deccrease star by 1
6) print the pattern 
7) use endl to print new line 
*/



#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   int n = 5;
   int star = n;

   for(int i = 1; i<=n; i++)
   {
        for(int j = star; j<=n; j++)
        {
            cout<<"*";
        }
        star--;
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
