/*pseudocode
1) take the service_year input from the user
2) if(service_year < 3) then vacation = 10
3) else if(service_year == 3) then vacation = 15
4) else if(service_year >3 && service_year <= 6) then vacation = 15 + ((service_year - 3)*2)
5) else if(service_year > 6) then vacation = 21 + ((service_year - 6)*1)
6) print the vacation days

*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int vacation;
    int service_year ;
    cin>>service_year;

    if(service_year < 3)
    {
        vacation = 10;
    }

    else if(service_year == 3)
    {
        vacation = 15;
    }

    else if(service_year >3 && service_year <= 6)
    {
        vacation = 15 + ((service_year - 3)*2);
    }

    else if(service_year > 6)
    {
        vacation = 21 + ((service_year - 6)*1);
    }


    cout<<"# of vacation days: "<<vacation<<endl;
    return 0;
}

/*
input
14
output
# of vacation days: 29
*/