/* pseudocode
1) define the function prototype, take seed input 
2) run nested for loop and assign A[i][j] = rand()% + 50 and print the array
3) call the sumMajorDiagonal() and inside of that function run nested for loop 
    check if (i == j)  calculate the sum += A[i][j]  and outside of the loop, return sum
4) print the sum and call the sumOtherDiagonal() and inside of that function
    run nested for loop and check if(i + j == row - 1)  calculate the sum += A[i][j]
    return the sum outside of the loop
5) print the sum of other Diagonal value

*/



#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

const int MAXROWS = 4;
const int MAXCOLS = 4;

int sumMajorDiagonal(int A[][MAXCOLS], int row, int col);
int sumOtherDiagonal(int A[][MAXCOLS], int row, int col);

int main()
{
    unsigned int seed;
    cin>>seed;
    srand(seed);

    int A[MAXROWS][MAXCOLS] = {0};
    for(int i = 0; i<MAXROWS; i++)
    {
        for(int j = 0; j<MAXCOLS; j++)
        {
            A[i][j] = rand() % 50;
            cout<<setw(4)<<right<<A[i][j];
        }
        cout<<endl;
    }

    cout << "Sum of the elements in the major diagonal is "
        << sumMajorDiagonal(A, MAXROWS, MAXCOLS) << endl;

    cout << "Sum of the elements in the other diagonal is "
        << sumOtherDiagonal(A, MAXROWS, MAXCOLS) << endl;
}


int sumMajorDiagonal(int A[][MAXCOLS], int row, int col)
{
    int sum = 0;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(i == j) sum += A[i][j];
        }
    }
    return sum;
}

int sumOtherDiagonal(int A[][MAXCOLS], int row, int col)
{
    int sum = 0;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(i + j == row - 1) sum += A[i][j];
        }
    }
    return sum;
}
