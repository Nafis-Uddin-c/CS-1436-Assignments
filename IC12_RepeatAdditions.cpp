/*pseudocode
1) genearate two random numbers inside the for loop using srand(time(0)) 
2) the loop will continue for 10 times
3) show the two numbers and ask user to input the sum of those values
4) if the user's answer isn't matched with the sum value, show the user "Wrong answer" and print the correct answer
5) if answer is correct, count corrct answer every time 
6) lastly print the total correct answers
*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    int correct_answer = 0;
    srand(time(0));

    for(int i = 1; i<=10; i++)
    {
        num1 = rand()% 50;
        num2 = rand()% 100;

        cout<<"What is "<<num1<<" + "<<num2<<"? ";

        int sum = num1 + num2;
        int ans;
        cin>>ans;

        if(sum == ans) correct_answer++;
        else cout<<"Wrong answer."<<endl<<"Your correct answer is "<<sum<<endl<<endl;
    }

    cout<<"Your have answered "<<correct_answer<<" questions correctly.";

    return 0;
}



/*
input
93
85
55
64
95
67
88
94
95
99

output
What is 10 + 83? What is 4 + 53? Wrong answer.
Your correct answer is 57

What is 43 + 14? Wrong answer.
Your correct answer is 57

What is 29 + 35? What is 13 + 14? Wrong answer.
Your correct answer is 27

What is 24 + 42? Wrong answer.
Your correct answer is 66

What is 5 + 53? Wrong answer.
Your correct answer is 58

What is 46 + 86? Wrong answer.
Your correct answer is 132

What is 37 + 27? Wrong answer.
Your correct answer is 64

What is 16 + 52? Wrong answer.
Your correct answer is 68

Your have answered 2 questions correctly.
*/