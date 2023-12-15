#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 4, col = 4, value;
    int a[row][col] = {0};

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            cin>>value;
            a[i][j] = value;
        }
    }
    

    int major_diagonal = 0, other_diagonal = 0;

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(i == j) major_diagonal += a[i][j];
            if(i+j == row - 1) other_diagonal += a[i][j];
        }
    }

    cout<<"Sum of the elements in the major diagonal is "<<major_diagonal<<endl;
    cout<<"Sum of the elements in the other diagonal is "<<other_diagonal<<endl;
    
    return 0;
}