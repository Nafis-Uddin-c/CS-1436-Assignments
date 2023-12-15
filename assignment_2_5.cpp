/* pseducode 
1) take input from user for units
2) if compare units as given statement and assign discount perchantage according to that
3) calculate discount = UNIT_PRICE * (units*discPercent)
4) calculate cost = (UNIT_PRICE*units) - discount
5) print units as well as both of them
*/


#include <iostream>
using namespace std;
const double UNIT_PRICE = 99.00;

int main()
{
    //Declare variable for units bought, percent discount, the total discount and the total cost
    int units;
    double discPercent, discount, cost;

    //Prompt user to enter units sold and store
    cin >> units;

   // code here
    if(units>100) discPercent = 0.5;
    else if(units>=50 && units<100) discPercent = 0.4; // here not counting 100 since question says more than 100
    else if(units>=20 && units<50) discPercent = 0.3;
    else if(units>=10 && units<20) discPercent = 0.2;
    else discPercent = 0.0;

    discount = UNIT_PRICE * (units*discPercent);
    cost = (UNIT_PRICE*units) - discount;

    //Display the units sold, the discount, and the cost
    cout << "Units sold: " << units << endl;
    cout << "Discount: " << discount << endl;
    cout << "Cost: " << cost << endl;
    
    return 0;
}


/*
input
65
output
Units sold: 65
Discount: 2574
Cost: 3861
*/