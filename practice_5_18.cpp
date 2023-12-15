#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row_first, col_first, row_second, col_second, value;
    cin>>row_first>>col_first>>row_second>>col_second;

    int a[row_first][col_first] = {0};
    int b[row_second][col_second] = {0};
    int c[row_first][col_second] = {0};
    
    if(col_first != row_second)  exit(0);

    for(int i = 0; i<row_first; i++)
    {
        for(int j = 0; j<col_first; j++)
        {
            cin>>value;
            a[i][j] = value;
        }
    }

    for(int i = 0; i<row_second; i++)
    {
        for(int j = 0; j<col_second; j++)
        {
            cin>>value;
            b[i][j] = value;
        }
    }

    cout<<"Output Matrix:"<<endl;

    for(int i = 0; i<row_first; i++)
    {
        for(int j = 0; j<col_second; j++)
        {
            for(int k = 0; k<col_first; k++)
            c[i][j] += (a[i][k] * b[k][j]);
        }
    }

    for(int i = 0; i<row_first; i++)
    {
        for(int j = 0; j<col_second; j++)
        cout<<c[i][j]<<" ";
        
        cout<<endl<<endl;
    }

    return 0;
}