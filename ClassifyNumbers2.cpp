/* pseudocode
1) initialize the variables
2) use a do while loop
3) inside do statement, take input the number from the user and increase i by 1
4) check a) if(number == 0) zero++;
        b) else if(number < 0) neg++; and product *= number;
        c) else if(number > 0) pos++; and sum += number;
5) prompt the user if he wants to input any other number and take a character input
6) while((ch != 'Y' && ch!= 'y' && ch!= 'n' && ch != 'N')) 
    prompt the user to input Y, y, n, or N and take the input again
7) Now complete the while statement with while(ch == 'Y' || ch == 'y')
8) a) if(pos == 1) print there was a positive number entered and print that number
    b) else if(pos>1) print the how many positive numbers were input and their sum 
    c) else print there was no positive value entered
9) a) if(neg == 1) print there was a negative number entered and print that number
    b) else if(neg>1) print how many negative numbers were input and their product
    c) else print there was no negative value entered
10) a) if(zero == 1) print there was a zero entered 
    b) else if(zero>1) print how many zero were input
    c) else print there was no zero input 
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int pos = 0, neg = 0, zero = 0;
    int sum= 0;
    int product = 1; 
    int number;
    char ch;
    int i = 1;
    
    do
    {
        cout<<"Enter whole number "<<i<<": ";
        i++;
        cin>>number;

        
        if(number == 0) zero++;
        else if(number < 0) 
        {
            neg++;
            product *= number;
        }
        else if(number > 0)
        {
            pos++;
            sum += number;
        }

        cout<<"Would you like to enter another number?"<<endl;
        cout<<"Enter Y for Yes or N for No: ";
        cin>>ch;

        while((ch != 'Y' && ch!= 'y' && ch!= 'n' && ch != 'N'))
        {
            cout<<"Error, "<<ch<<" is not a valid response."<<endl;
            cout<<"Would you like to enter another number?"<<endl;
            cout<<"Enter Y for Yes or N for No: ";
            cin>>ch;
        }           
    }
    while(ch == 'Y' || ch == 'y');
    

    cout<<endl;

    if(pos == 1) cout<<"One positive value was entered. It was a "<<sum<<"."<<endl;
    else if(pos>0) cout<<pos<<" positive values were entered. Their sum was "<<sum<<"."<<endl;
    else cout<<"No positive values were entered."<<endl;

    if(neg == 1) cout<<"One negative value was entered. It was a "<<product<<"."<<endl;
    else if(neg>0) cout<<neg<<" negative values were entered. Their product was "<<product<<"."<<endl;
    else cout<<"No negative values were entered."<<endl;
    
    if(zero == 1) cout<<"One zero was entered."<<endl;
    else if(zero>0) cout<<zero<<" zeroes were entered."<<endl;
    else cout<<"No zeroes were entered."<<endl;

    return 0;
}


/*
input
4 Y 3 i Y 3 N
output
Enter whole number 1: Would you like to enter another number?
Enter Y for Yes or N for No: Enter whole number 2: Would you like to enter another number?
Enter Y for Yes or N for No: Error, i is not a valid response.
Would you like to enter another number?
Enter Y for Yes or N for No: Enter whole number 3: Would you like to enter another number?
Enter Y for Yes or N for No: 
3 positive values were entered. Their sum was 10.
No negative values were entered.
No zeroes were entered.
*/