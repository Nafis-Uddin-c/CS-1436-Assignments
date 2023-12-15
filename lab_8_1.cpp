#include <bits/stdc++.h>
using namespace std;
void printGrade(double);
int main()
{
    double score;
    for(int i  = 0; i<5; i++)
    {
        cout<<"Enter score";
        cin>>score;
        printGrade(score);
    }
    return 0;
}
void printGrade(double score)
{
    if(score>= 90.0) cout<<'A'<<endl;
    else if(score >= 80.0) cout<<'B'<<endl;
    else if(score >= 70.0) cout<<'C'<<endl;
    else if(score >= 60.0) cout<<'D'<<endl;
    else cout<<'F'<<endl;
}