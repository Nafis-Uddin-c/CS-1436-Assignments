#include <bits/stdc++.h>
using namespace std;

int main()
{
    int seed;
    cin>>seed;

    srand(seed);
    char a[7] = {0};
    
    for(int j = 0; j<10; j++)
    {
        for(int i = 0; i<3; i++)
            a[i] = 'A' + rand()% 26;

        for(int i = 3; i<7; i++)
            a[i] = '0' + rand()% 10;
        
        cout<<"Vehicle plate number "<<j+1<<": ";

        for(int i = 0; i<7; i++)
            cout<<a[i];

            cout<<endl;
    }
    
    return 0;
}