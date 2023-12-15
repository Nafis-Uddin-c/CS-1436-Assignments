/* pseudocode 
1) write functions prototype
2) take six int array and one string array of NUM_PLAYERS size
3) take a string to get the input file name and open the file if it's exist else show error. If the file opens take input a string and print that 
4) using while loop input data to the one string array and then six int arrays
5) write this statement for the while loop condition     
    while(infile>> pname[count]>> page[count]>> pscores[count] >> prebounds[count] >> psteals[count] >> pblocks[count] >> pfouls[count])    \
    and increase count by 1
6) close the file and take a for loop and print the name, age, scores, rebounds, steals, blocks, and fouls
7) call the getAvg() function and inside that function take the array and array size
    run a for loop there and calculate the total += avg[i] and return (total/size)
8) call the getMin() function and inside that function initialize minimum = min[0] 
    run a for loop there and inside the loop check if(minimum > min[i])  then assign
    minimum = min[i] and minIndex = i   and then return minIndex
9) call the getMax() function and inside that function take a for loop and 
    check if(maximum < max[i])  then assign maximum = max[i]  and maxIndex = i and then return maxIndex
10) print the avg, min score and scorer first name, last name as well as max score and scorer name

*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int NUM_PLAYERS = 50;
const int NAME_COL_WIDTH = 16;

double getAvg(int [], int);
int getMin(int [], int);
int getMax(int [], int);

int main()
{
    
    string pname[NUM_PLAYERS];
    int page[NUM_PLAYERS], pscores[NUM_PLAYERS], prebounds[NUM_PLAYERS], psteals[NUM_PLAYERS],
    pblocks[NUM_PLAYERS], pfouls[NUM_PLAYERS];

    int count = 0, minIndex, maxIndex;
    double avg;

    string inputFileName;
    cin>>inputFileName;

    ifstream infile;
    infile.open(inputFileName);

    if(infile)
    {
        string temp;
        getline(infile, temp);
        cout<<endl<<temp<<endl;

        while(infile>> pname[count]>> page[count]>> pscores[count] >> prebounds[count] >> psteals[count] >> pblocks[count] >> pfouls[count])
        {
            count++;
        }

        infile.close();
    }
    
    else 
    {
       cout<<"Error opening the file"<<endl;
       exit(0);
    }

    for(int i = 0; i<count; i++)
    {
        cout<<left;
        cout<<setw(NAME_COL_WIDTH)<<pname[i]<<left<<setw(8)<<page[i]<<setw(8)<<pscores[i]<<setw(8)
        <<prebounds[i]<<setw(8)<<psteals[i]<<setw(8)<<pblocks[i]<<setw(8)<<pfouls[i]<<endl;
    }
   
    avg = getAvg(pscores, count);
    minIndex = getMin(pscores, count);
    maxIndex = getMax(pscores, count);

    cout<<"The average score is "<<avg<<endl;
    cout<<"Minimum score by "<<pname[minIndex]<<"  = "<<pscores[minIndex]<<endl;
    cout<<"Maximum score by "<<pname[maxIndex]<<"  = "<<pscores[maxIndex]<<endl;

}


double getAvg(int avg[], int size)
{
    double total = 0;

    for(int i = 0; i<size; i++)
    {
        total += avg[i];
    }

    return total/size;
}

int getMin(int min[], int size)
{
    int minimum = min[0];
    int minIndex = 0;

    for(int i = 1; i<size; i++)
    {
        if(minimum > min[i]) 
        {
            minimum = min[i];
            minIndex = i;
        }
    }

    return minIndex;
}

int getMax(int max[], int size)
{
    int maximum = max[0];
    int maxIndex = 0;

    for(int i = 1; i<size; i++)
    {
        if(maximum < max[i]) 
        {
            maximum = max[i];
            maxIndex = i;
        }
    }

    return maxIndex;
}