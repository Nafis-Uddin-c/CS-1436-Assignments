/* pseudocode
1) define the function prototype and take seed input
2) run nested loop and assign the value to the first array using A[i][j] = rand()% 50
    and print the array
3) do the 2nd step again for the 2nd array
4) take another array and pass all the array to the addMatrix() 
5) inside that function do sum of first and second array values using sum[i][j] = A[i][j] + B[i][j]
6) call the printResult() and run a for loop there
7) run another for loop inside the first one and print the three column element of first row of first array
8) check if (i!= 1) print the spaces else print spaces with character '+'
9) do the seventh step again for the second array
10) check if (i!= 1) print the spaces else print the spaces with character '='
11) do the seventh step again for the third array and lastly print the newline inside the first for loop 


*/



#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

const int ROW = 3;  
const int COL = 3;

void  addMatrix  (int A[ROW][COL], int B[ROW][COL], int sum[ROW][COL]);
void printResult(int A[ROW][COL], int B[ROW][COL], int sum[ROW][COL], char ch);

int main()
{
    int seed;
    cin >> seed;
    srand(seed);
    
    cout<<"Matrix1 is : "<<endl;

    int A[ROW][COL] = {0};
    for(int i = 0; i<ROW; i++)
    {
        for(int j = 0; j<COL; j++)
        {
            A[i][j] = rand() % 50;
            cout<<setw(4)<<right<<A[i][j];
        }
        cout<<endl;
    }

    cout<<"Matrix2 is : "<<endl;

    int B[ROW][COL] = {0};
    for(int i = 0; i<ROW; i++)
    {
        for(int j = 0; j<COL; j++)
        {
            B[i][j] = rand()% 50;   
            cout<<setw(4)<<right<<B[i][j];
        }
        cout<<endl;
    }

    int sum[ROW][COL] = {0};
    
    addMatrix(A, B, sum);
    cout << "The addition of the matrices is " << endl;
    printResult(A, B, sum, '+');

    return 0;
}

void addMatrix(int A[ROW][COL], int B[ROW][COL], int sum[ROW][COL])
{
    for(int i = 0; i<ROW; i++)
    {
        for(int j = 0; j<COL; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
}

void printResult(int A[ROW][COL], int B[ROW][COL], int sum[ROW][COL], char ch)
{
    for(int i = 0; i<ROW; i++)
    {
        for(int j = 0; j<COL; j++)
        cout<<setw(4)<<right<<A[i][j];

        if(i != 1) cout<<"     ";
        else cout<<"  "<<ch<<"  ";

        for(int j = 0; j<COL; j++)
        cout<<setw(4)<<right<<B[i][j];
        
        if(i != 1) cout<<"     ";
        else cout<<"  =  ";

        for(int j = 0; j<COL; j++)
        cout<<setw(4)<<right<<sum[i][j];

        cout<<endl;
    }
}
