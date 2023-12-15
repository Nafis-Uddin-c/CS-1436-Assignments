#include <bits/stdc++.h>
using namespace std;

int sum_index(int a[], int n, int sum);
int sum_index(int a[], int n, int sum)
{
    int index = -1;
    for(int i = 0; i<n; i++)
        if((sum - a[i]) == a[i]) index = i;

    return index;
}

int main()
{
    int n, sum;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }

    int index = sum_index(a, n, sum);

    if(index == -1) cout<<"No index has the sum";
    else cout<<"Index "<<index<<" has the sum";
    
    return 0;
}