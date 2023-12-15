/* pseudocode
1) generate a random number between 0 to 100
2) random_number = rand()% 101
3) use do while loop 
4) prompt the user to input a number and take the input inside the do statement
5) check if(number < random_number)   print the input is low
6) check else if(number > random_number)   print the input is high
7) complete the while statement  while(number != random_number)
8) print  Congrats!!!  Your input Matched! outside of the while statement

*/



#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{

   /* Type your code here. */

    srand (time(0));
    int random_number = rand()% 101;
    cout<<random_number<<endl;
    
    int number;
    do
    {
        cout<<"Enter a number: ";
        cin>>number;
        cout<<number<<endl;

        if(number < random_number) cout<<"The input is low"<<endl;
        else if(number > random_number) cout<<"The input is high"<<endl;

    }
    while(number != random_number);

    cout<<"Congrats!!!  Your input Matched!"<<endl;

   return 0;
}


/*
input
0 3 2 1

output
Enter a number: 0
The input is low
Enter a number: 3
The input is high
Enter a number: 2
The input is high
Enter a number: 1
Congrats!!!  Your input Matched!

*/