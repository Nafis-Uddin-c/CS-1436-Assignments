/* pseudocode
1) take a number from the user
2) run a for loop for n times
3) use two nested for loops
4) first for loop will count spaces and second for loop will count stars
5) decrease star by 1 and increase space by 1
6) print the pattern 
7) use endl to print new line 
*/


#include <iostream>
using namespace std;
int main() {

   /* Type your code here. */
   int n;
   cin>>n;
   int star = n;
   int space = 0;
   for(int i = 1; i<=n; i++)
   {
        for(int j = space; j>=1; j--)
        {
            cout<<" ";
        }
        for(int j  = star; j>=1; j--)
        {
            cout<<"*";
        }
        star--;
        space++;
        cout<<endl;
   }

   return 0;
}


/*
input
5
output
*****
 ****
  ***
   **
    * 

*/