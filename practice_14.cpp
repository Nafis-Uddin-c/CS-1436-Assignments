// Please use the same cout statements for your testcases to work. Spacing becomes important
/*pseudocode
1) use a while loop 
2) initialize i = 1 and write while(i<200)
3) check inside the loop if(i%2 != 0) then write
    a) pounds = i*2.2
    b) cout<< i << '\t' << '\t' << fixed << setprecision(1) << pounds <<endl;
4) inside the loop write i++

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    cout << "Kilograms" << '\t' << "Pounds" << endl;
    cout << "-----------------------" << endl;

    // write your code here

    double pounds;
    int i = 1;

    while(i<200)
    {
        if(i%2 != 0) 
        {
            pounds = i*2.2;
            cout<< i << '\t' << '\t' << fixed << setprecision(1) << pounds <<endl;
        }

        i++;
    }

    return 0;
}

/*
No input
Output is similar to the zylabs test
*/ 