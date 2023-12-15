#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 4, col = 4, value;
    int a[row][col] = {0};
    int b[row][col] = {0};

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            cin>>value;
            a[i][j] = value;
            cout<<value<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"The transpose of the matrix traversing uppertriangle by rows: "<<endl;

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            value = a[i][j];
            b[i][j] = a[j][i];
            a[j][i] = value;
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}