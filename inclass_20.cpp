/* pseudocode
1) declare the functions prototype
2) take input from the user
3) declare the max(int, int) function and print the maximum of them
4) declare the max(int, int, double, double) function and print the maximum of them
5) declare the max(int, int, double, double, double) function and print the maximum of them
6) write the function statement of max(int, int) 
7) if a is greater than b, assign maximum = a, else assign maximum = b and return the maximum
8) inside the max(int, double ) function write the same statement that you wrote for the max(int, int)
9) inside the max(double, double) function write the same statement that you wrote for the max(int, int)
10) Now, inside the max(int, int, double, double) write the statement 
    double maximum = (max (max (a, b), c), d);   and return the maximum
11) Again, inside the max(int, int, double, double, double) function write the statement
    double maximum = max( max( max( max(a, b), c), d), e) and return the maximum
    
    
*/


#include <bits/stdc++.h>
using namespace std;

int max(int, int);
double max(double, double);
double max(int, double);
double max(int, int, double, double);
double max(int, int, double, double, double);

int main()
{
    double maximum, c, d, e;
    int a, b;
    cin>>a>>b>>c>>d>>e;

    maximum = max (a,b);
    cout<<maximum<<endl;

    maximum = max(a, b, c, d);
    cout<<maximum<<endl;

    maximum = max(a, b, c, d, e);
    cout<<maximum<<endl;

    return 0;
}

int max(int a, int b)
{
    double maximum;
    if(a>b) maximum = a;
    else maximum = b;
    return maximum;
}

double max(int a, double b)
{
    double maximum;
    if(a>b) maximum = a;
    else maximum = b;
    return maximum;
}

double max(double a, double b)
{
    double maximum;
    if(a>b) maximum = a;
    else maximum = b;
    return maximum;
}

double max(int a, int b, double c, double d)
{
    double maximum = (max (max (a, b), c), d);
    return maximum;
}

double max(int a, int b, double c, double d, double e)
{
    double maximum = max( max( max( max(a, b), c), d), e);
    return maximum;
}


/*
input
0 7 9.8 4.3 5.4
output
7
4.3
9.8
*/