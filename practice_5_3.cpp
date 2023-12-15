#include <bits/stdc++.h>
using namespace std;
void output(int a[], int size_a);
void output(int a[], int size_a)
// {
//     int size_b = 1;
//     int b[size_b] = {0}, distinct = 0;
//     int cnt[100] = {0};
//     for(int i = 0; i<size-1; i++)
//     {
//         for(int j = 0; j<size; j++)
//         {
//             if(a[i] == a[j])
//                 break;
//         }
//         if(flag == 1) distinct++;
//     }
//     cout<<"The number of distinct integers is "<<distinct<<endl;

//     cout<<"The distinct integers are ";
//     for(int i = 0; i<size; i++)
//     {
//         cnt[a[i]]++;
//         if(cnt[a[i]] == 1) cout<<a[i]<<" ";
//     }

// }

{
    int size_b = 10, index = 0, flag = 1;
    int b[size_b] = {0}, distinct = 0;
    for(int i = 0; i<size_a; i++)
    {
        for(int j = 0; j<=index; j++)
            if(a[i] == b[j]) flag = 0;
        
        if(flag == 1) 
        {
            b[index] = a[i];
            index++;
        }
    }
    for(int i = 0; i<index; i++)
    {
        cout<<b[i]<<" ";
    }

}

int main()
{
    // int n, size_a = 1;
    // int a[size_a] = {0};
    // // cout<<a[size_a];
    // while(cin>>n)
    // {
    //     a[size_a - 1] = n;
    //     cout<<a[size_a-1];
    //     size_a++;
    // }

    int size_a = 10;
    int a[size_a] = {0};
    for(int i = 0; i<size_a; i++)
        cin>>a[i];

    output(a, size_a);

    return 0;
}