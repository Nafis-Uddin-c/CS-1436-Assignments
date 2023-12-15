#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k;

    getline(cin, s);
    int size = s.length();
    cin>>k;

    for(int i=0; i<k; i++)
    {
        char tmp = s[0];

        for(int i = 0; i<size-1; i++)
            s[i] = s[i+1];

        s[size-1] = tmp;

        for(int i = 0; i<size; i++)
        cout<<s[i];

        cout<<endl;  
    }
    
    return 0;
}