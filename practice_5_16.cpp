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
        }
    }


    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            value = a[i][j];
            b[i][j] = a[j][i];
            a[j][i] = value;
        }
    }

    bool flag = 1;

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        if(a[i][j] != b[i][j])  flag = 0;
    }

    (flag == 1)? cout<<"The matrix is symmetrical." : cout<<"The matrix is not symmetrical.";
    return 0;
}