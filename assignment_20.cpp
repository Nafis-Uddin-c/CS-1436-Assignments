/* pseudocode
1) declare function prototype
2) take input the size and the arrays
3) run nested loop to sort the arrays using swap function
4) print the arrays
5) call the mergedArrays function 
6) inside the function run for loop and check 
    if A[index_a] <= B[index_a]  assign C[i] = A[index_a] and increment the index_a 
        also check if(index_a == size1) break the loop
    else assign C[i] = B[index_b]  and increment the index_b
        also check if(index_b == size2) break the loop
7) outside of the loop check 
    if(index_a == size1)  run a for loop and assign  C[index_c] = B[index_b]   and increment the index_c
    else run a for loop and assign C[index_c] = A[index_a]  and increment the index_c 
8) in the main function print the C array values


*/




#include <iostream>
using namespace std;

void mergeArrays(int[], int, int[], int, int[]);

int main()
{
    const int MAX_SIZE = 7;

    int A[MAX_SIZE];
    int B[MAX_SIZE];
    int C[2 * MAX_SIZE] = {0};

    int size1, size2, size3;

    cin >> size1;
    if(size1 > MAX_SIZE) size1 = MAX_SIZE;

    for(int i = 0; i < size1; i++)
        cin >> A[i];


    cin >> size2;
    if(size2 > MAX_SIZE) size2 = MAX_SIZE;

    for(int i = 0; i < size2; i++)
        cin >> B[i];

    for(int i = 0; i<size1-1; i++)
    {
        for(int j = i+1; j<size1; j++)
        if(A[i] > A[j]) swap(A[i], A[j]);
    }

    for(int i = 0; i<size2-1; i++)
    {
        for(int j = i+1; j<size2; j++)
        if(B[i] > B[j]) swap(B[i], B[j]);
    }
    
    for(int i = 0; i<size1; i++)
        cout<<A[i]<<" ";

    cout<<endl;

    for(int i = 0; i<size2; i++)
        cout<<B[i]<<" ";

    cout<<endl;

    size3 = size1 + size2;

    mergeArrays(A, size1, B, size2, C);

   cout << "Merged array is of size " << size3 << " and the elements are: \n";

    for(int i = 0; i < size3; i++)
        cout << C[i] << " ";
    
}

void mergeArrays(int A[], int size1, int B[], int size2, int C[])
{
    int size3 = size1 + size2;
    int index_a = 0, index_b = 0, index_c  = 0;

    for(int i = 0; i<size3; i++)
    {
        index_c++;
        if(A[index_a] <= B[index_b])
        { 
            C[i] = A[index_a];
            index_a++;
            if(index_a == size1) break;
        }
        else 
        {
            C[i] = B[index_b];
            index_b++;
            if(index_b == size2) break;
        }
    }

    if(index_a == size1)
    {
        for(int i = index_b; i<size2; i++)
        {
            C[index_c] = B[index_b];
            index_c++; 
        }
    }

    else 
    {
        for(int i = index_a; i<size1; i++)
        {
            C[index_c] = A[index_a];
            index_c++; 
        }
    }
}
