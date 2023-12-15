#include <bits/stdc++.h>
using namespace std;
char getGrade(double);
int main()
{
    double score;
    cin>>score;
    cout<<"Enter a score"<<score<<endl;
    
    // cout<<"The grade score is"<<getGrade(score)<<endl;
    char grade = getGrade(score);
    cout<<"The grade is "<<grade<<endl;

    return 0;
}

char getGrade(double score)
{
    if(score>= 90) return 'A';
    else if(score >= 80) return 'B';
    else if(score >= 70) return 'C';
    else if(score >= 60) return 'D';
    else return 'F';
}