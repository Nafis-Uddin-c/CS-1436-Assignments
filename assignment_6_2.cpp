/*pseudocode
1) take an amount from the user
2) while the tuition amount is less than 1 prompt the user to enter a valid tuition amount
3) run a for loop for 14 times
4) when i is not bigger than 10 calculate the tuition += tuition * 0.05 and print the amount after each year
5) else calculate the tuition += tuition * 0.05 and add them to the sum 
6) print the sum of four-year tuition after ten years

*/


#include <iostream>
using namespace std;

int main()
{
    double tuition;
    cout << "Enter tuition amount: ";
    cin >> tuition;
    cout<<endl;

    while(tuition < 1)
    {
        cout<<"Enter a valid tuition amount: ";
        cin>>tuition;
        cout<<endl;
    }

    double sum = 0;

    // Tuition calculationfor every year
    for(int i = 1; i<=14; i++)
    {
        if(!(i>10))
        {
            tuition += tuition * 0.05;
            cout<<"Tuition after "<<i<<" years is "<<tuition<<endl;
        }

        else 
        {
            tuition += tuition * 0.05;
            sum += tuition;
        }
  
    }
 
    cout << "\nThe four-year tuition after ten years is " << sum << endl;

    return 0;
}

/*
input
-7
7000
output
Enter tuition amount: 
Enter a valid tuition amount: 
Tuition after 1 years is 7350
Tuition after 2 years is 7717.5
Tuition after 3 years is 8103.38
Tuition after 4 years is 8508.54
Tuition after 5 years is 8933.97
Tuition after 6 years is 9380.67
Tuition after 7 years is 9849.7
Tuition after 8 years is 10342.2
Tuition after 9 years is 10859.3
Tuition after 10 years is 11402.3

The four-year tuition after ten years is 51602.4
*/
