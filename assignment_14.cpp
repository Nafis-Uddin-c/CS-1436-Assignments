/* pseudocode
1) declare the functions prototype
2) inside the main function take input from the user
3) call the CalcAGI() function and print agi value
4) take the status input from the user and call the GetDeduction() and print the deduction value
5) call the CalcTaxable() and print the taxable value
6) call the CalcTax() and print the tax
7) take withheld input from the user and check if it is less than 0 assign it as 0
8) call the CalcTaxDue() and print the due value
9) inside the CalcAGI() calculate the AGI = wages + interest + unemployment
   check if AGI less than 0 then assign AGI = -AGI and return AGI
10) inside the GetDeduction() initialize the deduction value as 6000
    take a for loop and run it for the value of status
    inside the for loop write deduction *= 2
    also check if status is greater than 2 then return 6000
    else return deduction
11) inside the CalcTaxable() assign taxable - agi - deduction
    check if taxable is less than 0 then assign taxable = 0  and return taxable
12) inside the CalcTax() assign tax = 0 and check if status is less than 2 
    then check if taxable is less than 10001 then assign tax = (10.0/100) * taxable
        else if(taxable < 40001) tax = (1000 + (12.0/100) * (taxable -10000))
        else if(taxable < 85001) tax = (4600 + (22.0/100) * (taxable - 40000))
        else tax = (14500 + (24.0/100) * (taxable - 85000))
    else check if taxable is less than 20001 then assign tax = (10.0/100) * taxable
    else if(taxable < 80001) tax = (2000 + ((12.0/100) * (taxable - 20000)))
    else tax =(9200 + (22.0/100) * (taxable - 80000))
13) inside the CalcTaxDue() calculate the due = tax - withheld and return due

*/



#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int CalcAGI(int wages, int interest, int unemployment);
int GetDeduction(int status);
int CalcTaxable(int agi, int deduction);
int CalcTaxDue(int tax, int withheld);
int CalcTax(int status, int taxable);

int main() 
{
    int wages, interest, unemployment,status, withheld;
    int tax, agi, due, deduction, taxable;

    cin>>wages>>interest>>unemployment;
    agi = CalcAGI(wages, interest, unemployment);
    cout << "AGI: $" << agi << endl;

    cin>>status;
    deduction = GetDeduction(status);
    cout << "Deduction: $" << deduction << endl;

    taxable = CalcTaxable (agi, deduction);
    cout<<"Taxable income: $" << taxable<<endl;

    tax = CalcTax(status, taxable);
    cout<<"Federal tax: $" << tax <<endl;

    cin>>withheld;
    if(withheld < 0) withheld = 0;

    due = CalcTaxDue(tax, withheld);
    cout<<"Tax due: $"<<due<<endl;

    return 0;
}


int CalcAGI(int wages, int interest, int unemployment) 
{
    int AGI = wages + interest + unemployment;
    if(AGI < 0) AGI = -AGI;
    return AGI;
}

int GetDeduction(int status) 
{
    int deduction = 6000;

    for(int i = 0; i<status; i++)
    {
        deduction *= 2;
    }

    if(status > 2) return 6000;
    else return deduction;
}

int CalcTaxable(int agi, int deduction) 
{
    int taxable = agi - deduction;
    if(taxable < 0) taxable = 0;
    return taxable;
}

int CalcTax(int status, int taxable) 
{
    double tax = 0;
    if(status < 2) 
    {
        if(taxable < 10001) tax = (10.0/100) * taxable;
        else if(taxable < 40001) tax = (1000 + (12.0/100) * (taxable -10000));
        else if(taxable < 85001) tax = (4600 + (22.0/100) * (taxable - 40000));
        else tax = (14500 + (24.0/100) * (taxable - 85000));
    }

    else 
    {
        if(taxable < 20001) tax = (10.0/100) * taxable;
        else if(taxable < 80001) tax = (2000 + ((12.0/100) * (taxable - 20000)));
        else tax =(9200 + (22.0/100) * (taxable - 80000));
    }

    int Federal_tax = round (tax);
    return Federal_tax;
}

int CalcTaxDue(int tax, int withheld) 
{
    int due = tax - withheld;
    return due;
}


/* 
input
45600 5600 2 2 555
output
AGI: $51202
Deduction: $24000
Taxable income: $27202
Federal tax: $2864
Tax due: $2309
*/



