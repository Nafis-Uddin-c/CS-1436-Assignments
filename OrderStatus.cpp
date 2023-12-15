/* pseudocode
1) declare function prototype and define const
2) call getOrder function and inside that function take the spool_order, discount, custom_choice, custom_charge value 
    and prompt error and take those input again if the value is invalid and for that use while function
3) call the getSpoolStock function and inside there take spool_stock input and show error if the value is invalid and then take the input again
    and for that use while function
4) call calculateSpoolCharges function and inside there check 
    if discount is more than 0  calculate the spool_charge = (CHARGES_PER_SPOOL * spool_ship) - (CHARGES_PER_SPOOL*spool_ship*discount/100)
    else  spool_charge = (CHARGES_PER_SPOOL * spool_ship)  
    and return that value
5) call the shipping function and inside there check 
    if(custom_choice == 'Y' || custom_choice == 'y')  then calculate the   shipping_charge = spool_ship * custom_charge
    else  shipping_charge = spool_ship * SHIPING_CHARGE_PER_SPOOL
    and return that value
6) call the total function and inside there calculate the    total_charge = spool_charge + shipping_charge
    and return that value
7) call the order_summary function and inside of that function check 
    if(spool_order > spool_stock)    then   print     (spool_order - spool_stock)  this value and say that they are on back order
8) print spool_ship   and say that  spools are ready to ship
9) check if(discount > 0)   then print the  spool_ship  and the  spool_charge and show the discount value in that line as well
10) else print the print the  spool_ship  and the  spool_charge and without showing the discount value
11) print the shipping_charge and total_charge lastly and print the thanks message
*/



#include <bits/stdc++.h>
using namespace std;

void getOrder(int &, double &, char &, double &);
void getSpoolStock(int &);
double calculateSpoolCharges(int & , double &);
double shipping(int, double, char);
double total(double, double);
void order_summary(int, int, int, double, double, double, double);

const double CHARGES_PER_SPOOL = 134.95;
const double SHIPING_CHARGE_PER_SPOOL = 15;

int main()
{
    int spool_order, spool_stock, spool_ship;
    double discount, custom_charge;
    char custom_choice;

    // getOrder function will take input spool_order, discount, custom_choice, custom_charge 
    getOrder(spool_order, discount, custom_choice, custom_charge);

    // getSpoolStock function will take input only spool_stock value
    getSpoolStock(spool_stock);

    if(spool_order > spool_stock) spool_ship = spool_stock;
    else spool_ship = spool_order;

    // calculateSpoolCharges function will calculate the spool_charge and return that value
    double spool_charge = calculateSpoolCharges(spool_ship, discount);

    // shipping_charge function will calculate the shipping and handling cost and return that value
    double shipping_charge = shipping(spool_ship, custom_charge, custom_choice);

    // total function will calculate the total_charge and return that value
    double total_charge = total(spool_charge, shipping_charge);

    // order_summary is a void function and it will print the output of the order summary
    order_summary(spool_order, spool_stock, spool_ship, spool_charge, discount, shipping_charge, total_charge);
    
    return 0;
}

void getOrder(int & spool_order, double & discount, char & custom_choice, double & custom_charge)
{
    cout<<"Please enter the number of spools ordered: ";
    cin>>spool_order;

    while(spool_order < 1)
    {
        cout<<"Spools must be at least one."<<endl;
        cin>>spool_order;
    }
    
    cout<<"Enter the discount percentage for the customer: ";
    cin>>discount;

    while(discount < 0)
    {
        cout<<"The percentage cannot be negative."<<endl;
        cin>>discount;
    }

    cout<<"Does the order include custom shipping and handling charges?";
    cout<<" [Enter Y for Yes or N for No]: ";
    cin>>custom_choice;

    while(!(custom_choice == 'Y' || custom_choice == 'N' || custom_choice == 'y' || custom_choice == 'n'))
    {
        cout<<"\nError, invalid response. The response should be Y for Yes or N for No."<<endl;
        cout<<"Does the order include custom shipping and handling charges?";
        cout<<" [Enter Y for Yes or N for No]: ";
        cin>>custom_choice;
    }

    if(custom_choice == 'Y' || custom_choice == 'y')
    {
        cout<<"Enter the shipping and handling charge: ";
        cin>>custom_charge;

        while (custom_charge < 0)
        {
            cout<<"\nError, invalid charges entered. Shipping and handling cannot be negative."<<endl;
            cout<<"Enter the shipping and handling charge: ";
            cin>>custom_charge;
        }
    }
}

void getSpoolStock(int & spool_stock)
{
    cout<<"Enter the number of spools in stock: "<<endl;
    cin>>spool_stock;

    while(spool_stock < 0)
    {
        cout<<"The number of spools cannot be negative."<<endl;
        cout<<"Enter the number of spools in stock: "<<endl;
        cin>>spool_stock;
    }
}

double calculateSpoolCharges(int & spool_ship, double & discount)
{
    double spool_charge;

    if(discount > 0) 
    spool_charge = (CHARGES_PER_SPOOL * spool_ship) - (CHARGES_PER_SPOOL*spool_ship*discount/100);

    else  spool_charge = (CHARGES_PER_SPOOL * spool_ship);
    
    return spool_charge;
}

double shipping(int spool_ship, double custom_charge, char custom_choice)
{
    double shipping_charge;

    if(custom_choice == 'Y' || custom_choice == 'y')  shipping_charge = spool_ship * custom_charge; 
    else  shipping_charge = spool_ship * SHIPING_CHARGE_PER_SPOOL;
    
    return shipping_charge;
}

double total(double spool_charge, double shipping_charge)
{
    double total_charge = spool_charge + shipping_charge;
    return total_charge;
}

void order_summary(int spool_order, int spool_stock, int spool_ship, 
        double spool_charge, double discount, double shipping_charge, double total_charge)
{
    cout<<"\t\tOrder Summary"<<endl;
    cout<<"=============================="<<endl;

    if(spool_order > spool_stock)
    cout<<(spool_order - spool_stock)<<" spools are on back order."<<endl;   

    cout<<spool_ship<<" spools are ready to ship."<<endl;

    if(discount > 0)
    cout<<"The charges for "<<spool_ship<<" spools (including a "<<fixed<<setprecision(1)<<discount<<"% discount): $"
        <<fixed<<setprecision(2)<<spool_charge<<endl;

    else cout<<"The charges for "<<spool_ship<<" spools : $"<<fixed<<setprecision(2)<<spool_charge<<endl;

    cout<<"Shipping and handling for "<<spool_ship<<" spools: $"<<fixed<<setprecision(2)<<shipping_charge<<endl;
    cout<<"The total charges (incl. shipping & handling): $"<<fixed<<setprecision(2)<<total_charge<<endl<<endl;

    cout<<"Thank you, please shop again."<<endl;
}

