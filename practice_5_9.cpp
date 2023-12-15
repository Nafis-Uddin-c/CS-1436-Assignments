#include <bits/stdc++.h>
using namespace std;

int BalancedString(string s, int n);
int BalancedString(string s, int n)
{
    int count_open = 0, count_close= 0;
    for(int i = 0; i<n; i++)
    {
        if(s[i] == '(')  count_open++;
        else if(s[i] == ')')count_close++;
    }
    if(count_open == count_close) return 1;
    else return 0;
}
int main()
{
    string s;
    getline(cin, s);
    int flag = BalancedString(s, s.length());
    if(flag == 0) cout<<"The given string is not balanced.";
    else cout<<"The given string is balanced.";
    return 0;
}