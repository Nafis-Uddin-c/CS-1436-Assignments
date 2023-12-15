/* pseudocode
1) use a for loop 
2) for(int i = 1; i<200; i++)
3) check if(i%2 != 0) then 
    write cout<< setw(12) << i << setw(8) << fixed << setprecision(1) << (i*2.2) <<endl;
*/


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    cout << left << setw(12) << "Kilograms" << setw(8) << "Pounds" << endl;
    cout << "-----------------------" << endl;

    // code here. USe the same setw when displaying values as well

    for(int i = 1; i<200; i++)
    {
        if(i%2 != 0) 
        cout<< setw(12) << i << setw(8) << fixed << setprecision(1) << (i*2.2) <<endl;
    }
 
   return 0;
}

/*
No input
Output is similar to the zylabs test
*/