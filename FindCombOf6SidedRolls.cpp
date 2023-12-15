/* pseudocode 
1) take the seed and number of games input
2) run a for loop and assign random values to the two dices from 1 to 6
3) increment the count using cnt[dice1-1][dice2-1]++
4) run a for loop and print the count array

*/



#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int seed;
    cin>>seed;
    srand(seed);

    cout<<"How many times do you want the two dice rolled? ";
    int n;
    cin>>n;

    cout<<"The combinations:"<<endl;

    unsigned int dice1, dice2;
    unsigned int cnt[6][6] = {0};

    for(int i = 0; i<n; i++)
    {
        dice1 = 1 + rand()% 6;
        dice2 = 1 + rand()% 6;
        cnt[dice1-1][dice2 -1]++;
    }

    for(int i = 0; i<6; i++)
    {
        for(int j = 0; j<6; j++)
        cout<<"Die 1 = "<<i+1<<" Die 2 = "<<j+1<<" occurred "<<cnt[i][j]<<" times."<<endl;
    }

    return 0;
}