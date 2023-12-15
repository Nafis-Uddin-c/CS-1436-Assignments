/* pseudocode 
1) prompt the user to enter the score
2) use a do while loop and inside the do statement take the input in an array and increase the count by 1
3) check in while if array[count-1] != -999
4) is the count is 1 print there is no score entered 
5) else run a for loop and count the total 
6) calculate the average and print it 
9) check if count is greater than 2 
    run a for loop and check if there is any score less than average and print them

*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the first score or -999 to end input:";
    const int SIZE = 120;
    int count = 0;
    int array[SIZE] = {0};

    do
    {
        cin>>array[count];
        count++;
    }
    while(array[count-1] != -999);

    if(count == 1)
    cout<<"No scores were entered."<<endl;
    
    else
    {
        int total = 0;
        for(int i = 0; i<count-1; i++)
        total += array[i];

        double avg = total*1.0 /(count-1); 
        cout<<"The average of the scores is: "<<fixed<<setprecision(1)<<avg<<"."<<endl;

        if(count > 2)
        {
            cout<<"The scores below the average were: ";
            for(int i = 0; i<count-1; i++)
            {
                if(array[i] < avg)
                cout<<array[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
