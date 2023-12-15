#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 3, col = 3, value;
    int a[row][col] = {0};
    int b[row][col] = {0};
    int c[row][col] = {0};

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            cin>>value;
            a[i][j] = value;
        }
    }

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            cin>>value;
            b[i][j] = value;
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout<<"The addition of the matrices is "<<endl;

    for(int j = 0; j<row; j++)
    {
        cout<<" ";

        for(int i = 0; i<col; i++)
        cout<<a[j][i]<<" ";

        if(j!= 1)  cout<<"     ";
        else cout<<" +   ";

        for(int i = 0; i<col; i++)
        cout<<b[j][i]<<" ";

        if(j!=1) cout<<"     ";
        else cout<<" =   ";

        for(int i = 0; i<col; i++)
        {
            cout<<c[j][i];
            if(i!= 2) cout<<" ";
        }

        if(j != 2) cout<<endl;
    }

    return 0;
}