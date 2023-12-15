/* pseudocode
1) define the pi value
2) write the functions' prototype
3) take the radius from the user
4) if radius is equal to 0 or less than that then call the invalid_radius() function
5) else call the  diameter()  area()   circumference() function
6) write the function statement now
7) for void invalid_radius()   print  Invalid Radius
8) for void diameter()   function   calculate the  diameter = 2*radius and print it
9) for void area()  function  calculate the  area = pi*radius*radius and print it
10) for void circumference()  function calculate the circumference = 2*pi*radius and print it

*/

#include <bits/stdc++.h>
using namespace std;

const double PI = 3.14;

void invalid_radius();
void diameter(double);
void area(double);
void circumference(double);

int main()
{
    double radius;
    cin>>radius;

    if(radius <= 0) invalid_radius();
    else 
    {
        diameter(radius);
        area(radius);
        circumference(radius);
    }
    
    return 0;
}

void invalid_radius()
{
    cout<<"Invalid Radius"<<endl;
}

void diameter(double radius)
{
    double diameter = 2*radius;
    cout<<diameter<<endl;
}

void area(double radius)
{
    double area = PI*radius*radius;
    cout<<area<<endl;
}

void circumference(double radius)
{
    double circumference = 2*PI*radius;
    cout<<circumference<<endl;
}

/*
input
20.4
output
40.8
1306.74
128.112
*/


/*
input
-4
output
Invalid Radius
*/