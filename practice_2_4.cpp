/*pseudocode
1) take input year from the user
2) if ((year%4 == 0 && year%100 !=0) || year %400 == 0) print that year is a leap year
3) otherwise print that year is not a leap year
*/


#include <iostream>
using namespace std;

int main() {

    int year;
    cin >> year;

    if((year%4 == 0 && year%100 !=0) || year %400 == 0) cout<<year<<" is a leap year";
    else cout<<year<<" is not a leap year";

    return 0;
}

/*
input
2030
output
2030 is not a leap year
*/