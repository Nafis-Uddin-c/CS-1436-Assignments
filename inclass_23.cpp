/* pseudocode
1) write functions prototype
2) take two arrays - string and integer of NUM_PLAYERS size
3) take a string to get the input file name and open the file if it's exist else show error. If the file opens take input a string and print that 
4) then take input the string and scores using while loop
5) inside the loop transfer those strings and scores value 
    to two different arrays using increment operator
6) close the file and take a for loop and print the name and scores
7) call the getAvg() function and inside that function take the array and array size
    run a for loop there and calculate the total += avg[i] and return (total/size)
8) call the getMin() function and inside that function initialize minimum = min[0] 
    run a for loop there and inside the loop check if(minimum > min[i])  then assign
    minimum = min[i] and minIndex = i   and then return minIndex
9) call the getMax() function and inside that function take a for loop and 
    check if(maximum < max[i])  then assign maximum = max[i]  and maxIndex = i and then return maxIndex
10) print the avg, min score and scorer name, and max score and scorer name perfectly

*/


#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int NUM_PLAYERS = 50;

double getAvg(int [], int);
int getMin(int [], int);
int getMax(int [], int);

int main()
{
    int pscores[NUM_PLAYERS];
    string pname[NUM_PLAYERS];

    int scores, i, minIndex, maxIndex;
    string name;
    cin>>name;
    double avg;
    
    // file opening steps
    ifstream infile;
    infile.open(name);

    if(infile)
    {   // Skip  the header line

        string temp;
        getline(infile, temp);
        cout << "SNO " << temp << endl;

        while(infile>>name>>scores)
        {
            //reading data into different arrays
            pname[i] = name;
            pscores[i] = scores;
            i++;
        }

        infile.close();
    }

    else 
    {
        cout<<"Error opening the file";
        exit(0);
    }

    for(int i = 0; i<NUM_PLAYERS; i++)
    {
        cout<<left;
        cout<<setw(4)<<(i+1)<<setw(15)<<pname[i]<<setw(3)<<pscores[i]<<endl; 
    }

    avg = getAvg(pscores, NUM_PLAYERS);
    minIndex = getMin(pscores, NUM_PLAYERS);
    maxIndex = getMax(pscores, NUM_PLAYERS);

    cout<<"The average score is "<<avg<<endl;
    cout<<"Minimum score by "<<pname[minIndex]<<" = "<<pscores[minIndex]<<endl;
    cout<<"Maximum score by "<<pname[maxIndex]<<" = "<<pscores[maxIndex]<<endl;
    
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
    int minIndex;

    for(int i = 0; i<size; i++)
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
    int maxIndex;

    for(int i = 0; i<size; i++)
    {
        if(maximum < max[i]) 
        {
            maximum = max[i];
            maxIndex = i;
        }
    }

    return maxIndex;
}