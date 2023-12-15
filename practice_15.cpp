/* pseudocode
1) initialize total and n
2) run a for loop for 30 times
3) write total += (i/n)  and  n--  inside the for loop
4) print the total

*/

#include <iostream>
using namespace std;
int main() 
{
    double total = 0;
    double n = 30.0;
    //your code here 

    for( int i = 1; i<=30; i++)
    {
        total += (i/n);
        n--;
    }
    
    cout<<" "<<total<<endl;

    return 0;
}

/*
No input 
Output is similar to the zylabs test
*/