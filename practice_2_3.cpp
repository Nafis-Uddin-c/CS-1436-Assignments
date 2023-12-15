/* pseudocode
1) define charges for all package
2) define base minutes for all package
3) define extra charges for A and B packages
4) take input the package and minutes from the user
5) use setprecision(2) and fixed
6) use switch case
7) when case is A
    a) if minutes>base_A then total_charges_A = charges_A + (extra_charges_A*(minutes-base_A))
    b) else total_charges_A = charges_A
8) print total charges_A
9) if(total_charges_A>charges_B) 
    a) check if (minutes<base_B) then Saved_B = (total_charges_A - charges_B)
    b) else Saved_B = (total_charges_A -(charges_B + (extra_charges_B * (minutes - base_B))))
10) otherwise Saved_B = 0
11) check if Saved_B is greater than 0 then print Saved_B otherwise do nothing for that
12) if(total_charges_A>charges_C) saved_C = (total_charges_A - charges_C) otherwise saved_C = 0
13) check if(saved_C>0) print saved_C otherwise do nothing for that  
14) if the user input B then check:
    a) if(minutes>base_B) total_charges_B = charges_B + (extra_charges_B * (minutes - base_B))
    b) otherwise total_charges_B = charges_B
15) print the total_charges_B
16) if(total_charges_B>charges_C) saved_C = (total_charges_B - charges_C) otherwise saved_C = 0;
17) if(saved_C>0) then print saved_C
18) if the user enters C, calculate total_charges_C = charges_C and print the total_charges_C
19) if user inputs any other things instead of A, B, or C, then prompt the user that package is invalid
*/



#include <bits/stdc++.h>
using namespace std;
int main()
{
    const double charges_A = 39.99;
    const double charges_B = 59.99;
    const double charges_C = 69.99;

    const double base_A = 450.0;
    const double base_B = 900.0;

    const double extra_charges_A = 0.45;
    const double extra_charges_B = 0.40;

    double total_charges_A;
    double total_charges_B;
    double total_charges_C;

    double Saved_B;
    double saved_C;

    char pkg;
    cin>>pkg;
    
    double minutes;
    cin>>minutes;

    cout<<setprecision(2)<<fixed;

    switch (pkg)
    {
        // case A
        case 'A':
        if(minutes>base_A) total_charges_A = charges_A + (extra_charges_A* (minutes - base_A));
        else total_charges_A = charges_A;

        cout<<"The charges are "<<total_charges_A<<endl;

        if(total_charges_A>charges_B) 
        {
            if(minutes<base_B) Saved_B = (total_charges_A - charges_B);
            else Saved_B = (total_charges_A -(charges_B + (extra_charges_B * (minutes - base_B))));
        }
        else Saved_B = 0;
        if(Saved_B>0) cout<<"With package B you would have saved "<<Saved_B<<endl;

        if(total_charges_A>charges_C) saved_C = (total_charges_A - charges_C);
        else saved_C = 0;

        if(saved_C>0) cout<<"With package C you would have saved "<<saved_C;
        break;
        
        // case B
        case 'B':
        if(minutes>base_B) total_charges_B = charges_B + (extra_charges_B * (minutes - base_B));
        else total_charges_B = charges_B;

        cout<<"The charges are "<<total_charges_B<<endl;

        if(total_charges_B>charges_C) saved_C = (total_charges_B - charges_C);
        else saved_C = 0;

        if(saved_C>0) cout<<"With package C you would have saved "<<saved_C;
        break;

        // case C
        case 'C':
        total_charges_C = charges_C;
        cout<<"The charges are "<<total_charges_C;
        break;
    

        default:
        cout<<"Invalid pkg Enter A, B, or C";
        break;
    }
    
    return 0;
}



/*
input
A 2838
output
The charges are 1114.59
With package B you would have saved 279.40
With package C you would have saved 1044.60
*/