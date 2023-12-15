/* pseudocode
1) declare the function prototype
2) prompt the user to enter students number and take students input
3) take a double array and initialize best = scores[0]
4) run a for loop and take scores in the array and check 
    if(best < scores[i])  then  assign  best = scores[i] 
5) call the displayGrades() function with array name, size and best_score arguments
6) inside the called function run a for loop and calculate the  grade_score = best - scores[i]
        if(grade_score <= 10) grade = 'A'
        else if(grade_score <= 20) grade = 'B'
        else if(grade_score <= 30) grade = 'C'
        else if(grade_score <= 40) grade = 'D'
        else grade = 'F'
    and lastly print the scores of all students as well as grade


*/


#include <iostream>
using namespace std;

 // Function prototype
void displayGrades(double [], double, int);

int main() 
{
    /* Type your code here. */
    cout<<"Enter number of students: "<<endl;

    int students;
    cin>>students;

    cout<<"Enter "<<students<<" scores: "<<endl;

    double scores[students], best_score = scores[0];

    for(int i = 0; i<students; i++)
    {
        cin>>scores[i];
        if(best_score < scores[i]) best_score = scores[i];
    }

    displayGrades(scores, students, best_score);

    return 0;
}

void displayGrades(double scores[], double students, int best)
{
    double grade_score;
    char grade;
    for(int i = 0; i<students; i++)
    {
        grade_score = best - scores[i];
        if(grade_score <= 10) grade = 'A';
        else if(grade_score <= 20) grade = 'B';
        else if(grade_score <= 30) grade = 'C';
        else if(grade_score <= 40) grade = 'D';
        else grade = 'F';

        cout<<"Student "<<i<<" score is "<<scores[i]<<" and grade is "<<grade<<endl;
    }
    
}


/*
input
6
98 87 83 75 66 90
output
Enter number of students: 
Enter 6 scores: 
Student 0 score is 98 and grade is A
Student 1 score is 87 and grade is B
Student 2 score is 83 and grade is B
Student 3 score is 75 and grade is C
Student 4 score is 66 and grade is D
Student 5 score is 90 and grade is A
*/