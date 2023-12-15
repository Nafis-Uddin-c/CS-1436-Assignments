/* pseudocode
1)  take a string array and input name there
2) take another int array of 5 size
3) take input the player and use do while loop
4) inside the loop take score input and check if(score <= 3)  calculate the score_array[player] += score
5) else use while loop and check if (score > 3) print that score should be 1, 2, or 3 and take the score again and 
    check if(score <= 3)  calculate the score_array[player] += score
6) outside the else statement take input player number
7) write condition player >= 0 inside the while statement
8) run a for loop and print the players' name and their scores 
*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    string player_array[5] = {"Barkley", "Jordan", "Curry", "Lebron", "Hakeem"};
    int score_array[5] = {0};
    int player;
    int score;
    cin>>player;
    do
    {
        cin>>score;
        if(score <= 3) score_array[player] += score;
        else
        { 
            while(score > 3) 
            {
                cout<<"The score has to be 1, 2 or 3"<<endl;
                cin>>score;
                if(score <= 3) score_array[player] += score;
            }
        }    
        cin>>player;

    } while(player >= 0);
    
    cout<<"The scores of the players are " << endl;

    for(int i = 0; i<5; i++)
    {
        cout<<player_array[i]<<" "<<score_array[i]<<endl;
    }

    return 0;
}

  