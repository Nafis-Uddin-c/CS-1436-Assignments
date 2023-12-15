/*pseudocode
1) initialize all the variables
2) use srand(seed)
3) use do statement and take random number using   number = 1 + rand()% 2 
4) if(number == 1) print Flip = Heads  and do head++;
5) else if(number == 2) print Flip = Tails  and do tail++
6) ask the user if he wants to flip again and take the character from the user
7) complete the loop statement with while (ch == 'Y' || ch == 'y')
8) a) calculate double total = head + tail
   b) head_perchan = (head/total)*100.0
   c) tail_perchan = (tail/total)*100.0
9) print the output using proper setprecision() and print the perchantage also
*/


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int seed;
    double head_perchan, tail_perchan;
    char ch;
    int head = 0;
    int tail = 0;
    int number;
    
    cin>>seed;
    srand(seed);

    do
    {
        number = 1 + rand()% 2;
        if(number == 1) 
        {
            cout<<"Flip = Heads"<<endl;
            head++;
        }
        else if(number == 2)
        {
            cout<<"Flip = Tails"<<endl;
            tail++;
        }

        cout<<"Would you like to flip again?"<<endl;
        cout<<"Enter Y for Yes or N for No: ";
        cin>>ch;
            
        while(ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n')
        {
            cout<<endl<<"Error, "<<ch<<" is not a valid response."<<endl;
            cout<<"Would you like to flip again?"<<endl;
            cout<<"Enter Y for Yes or N for No: ";
            cin>>ch;
        }
    } 
    while (ch == 'Y' || ch == 'y');
    
    cout<<endl;

    double total = head + tail;
    head_perchan = (head/total)*100.0;
    tail_perchan = (tail/total)*100.0;
    
    cout<<head<<" of the "<<total<<" flips were Heads or "<<fixed<<setprecision(2)<<head_perchan<<"% were Heads."<<endl;
    cout<<tail<<" of the "<<fixed<<setprecision(0)<<total<<" flips were Tails or "<<fixed<<setprecision(2)<<tail_perchan<<"% were Tails."<<endl;

    return 0;
}

/*
input
y y y y y n
output
Flip = Tails
Would you like to flip again?
Enter Y for Yes or N for No: Flip = Heads
Would you like to flip again?
Enter Y for Yes or N for No: Flip = Tails
Would you like to flip again?
Enter Y for Yes or N for No: Flip = Tails
Would you like to flip again?
Enter Y for Yes or N for No: Flip = Tails
Would you like to flip again?
Enter Y for Yes or N for No: Flip = Heads
Would you like to flip again?
Enter Y for Yes or N for No: 
2 of the 6 flips were Heads or 33.33% were Heads.
4 of the 6 flips were Tails or 66.67% were Tails.
*/