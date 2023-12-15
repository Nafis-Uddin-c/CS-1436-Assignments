/* pseudocode
1) define two functions' prototype
2) take salary and credit score from the user inside the main function
3) if salary is equal to or more than 20000 and credit_score is more than 7 then call the Qualify() function
4) else call the Not_qualify() function
5) Now outside the main function write the function's statement
6) inside the Qualify function print congrats message that the person would get credit card
7) inside the Not_qualify function print the message that the person isn't qualify for the credit card now 

*/



#include <bits/stdc++.h>
using namespace std;

void Qualify();
void Not_qualify();

int main()
{
    int salary, credit_score;
    cin>>salary>>credit_score;

    if(salary >= 20000 && credit_score > 7) Qualify();
    
    else Not_qualify();

    return 0;
}

void Qualify()
{
    cout<<"Congratulations! You qualify for the credit card!";
}

void Not_qualify()
{
    cout<<"I'm sorry. You do not qualify for the credit card.";
}


/*
input
21000 8
output
Congratulations! You qualify for the credit card!
*/

/*
input
33333 2
output
I'm sorry. You do not qualify for the credit card.
*/

/*
input
11344 8
output
I'm sorry. You do not qualify for the credit card.
*/

/* 
input
19949 4
output
I'm sorry. You do not qualify for the credit card.
*/