/* pseudocode
1) define the functions prototype
2) inside the main function take input the inputfile name
3) open that file and take a string from the file and print it
4) run nested for loop. inside the first for loop take name input and print that
5) inside the second for loop input to the 2 dimensional array and print them
6) call getMin() function and inside of that function initialize the minimum as the first index of points col
7) run for loop and check if any scores are less than minimum, then assign them as minimum, find the minIndex and return it
8) call getMax() function and inside of that function initialize the maximum as the first index of points col
9) run for loop and check if any scores are greater than maximum, then assign them as maximum, find the maxIndex and return it
10) call the getAvg() function and run a for loop to get the total score. 
11) Calculate the avg_score dividing total_score by NUM_PLAYERS and return that value
12) call the avg_rebound() function and run a for loop to get the total_rebound 
13) Calculate the avg_rebound dividing total_rebound by NUM_PLAYERS and return that value
14) call the avg_steals() function and run a for loop to get the total_steal 
15) Calculate the avg_steal dividing total_steal by NUM_PLAYERS and return that value

*/



#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int NUM_PLAYERS = 25;
const int NUM_COLS = 6;
//Define categories
const int AGE=0;
const int POINTS=1;
const int REB=2;
const int STEALS=3;
const int BLOCKS=4;
const int PF=5;

double getAvg(int [][NUM_COLS], int , int);
double avg_steals(int [][NUM_COLS], int, int);
double avg_rebound(int [][NUM_COLS], int , int);
int getMin(int [][NUM_COLS], int, int);
int getMax(int [][NUM_COLS], int, int);


int main()
{
    int minIndex, maxIndex;
    int pscores[NUM_PLAYERS][NUM_COLS] = {0};
    string pname[NUM_PLAYERS];

    ifstream infile;
    string filename;
    cin>>filename;

    infile.open(filename);
    string tmp;
    getline(infile, tmp);
    cout<<tmp<<endl;

    for(int i = 0; i<NUM_PLAYERS; i++)
    {
        infile>>pname[i];
        cout<<left<<setw(16)<<pname[i];

        for(int j = 0; j< NUM_COLS; j++)
        {
            infile>>pscores[i][j];
            cout<<left<<setw(8)<<pscores[i][j];
        }
        cout<<endl;
    }

    minIndex = getMin(pscores, NUM_PLAYERS, POINTS);
    maxIndex = getMax(pscores, NUM_PLAYERS, POINTS);
   
    cout << "\nThe average score is "
            << getAvg(pscores,NUM_PLAYERS, POINTS ) << endl;
    cout << "The average rebound is "
            << avg_rebound(pscores,NUM_PLAYERS, REB ) << endl;
    cout << "The average steals is "
            << avg_steals(pscores,NUM_PLAYERS, STEALS ) << endl;


    cout << "Minimum score by " << pname[minIndex]
            << " = " << pscores[minIndex][POINTS] << endl;

    cout << "Maximum score by " << pname[maxIndex]
            << " = " << pscores[maxIndex][POINTS] << endl;
}



double getAvg(int pscores[][NUM_COLS], int NUM_PLAYERS, int POINTS)
{
    double total_score = 0;

    for(int i = 0; i<NUM_PLAYERS; i++)
    {
        total_score += pscores[i][POINTS];
    }

    double avg_score = total_score/NUM_PLAYERS;
    return avg_score;
}

double avg_rebound(int pscores[][NUM_COLS], int NUM_PLAYERS, int REB)
{
    double total_rebound = 0;

    for(int i = 0; i<NUM_PLAYERS; i++)
    {
        total_rebound += pscores[i][REB];
    }

    double avg_rebound = total_rebound/NUM_PLAYERS;
    return avg_rebound;
}

double avg_steals(int pscores[][NUM_COLS], int NUM_PLAYERS, int STEALS)
{
    double total_steal = 0;

    for(int i = 0; i<NUM_PLAYERS; i++)
    {
        total_steal += pscores[i][STEALS];
    }

    double avg_steal = total_steal/NUM_PLAYERS;
    return avg_steal;
}

int getMin(int pscores[][NUM_COLS], int NUM_PLAYERS, int POINTS)
{
    double minimum = pscores[0][POINTS];
    int minIndex;

    for(int i = 1; i<NUM_PLAYERS; i++)
    {
        if(minimum > pscores[i][POINTS]) 
        {
            minimum = pscores[i][POINTS];
            minIndex = i;
        }
    }
    return minIndex;
}

int getMax(int pscores[][NUM_COLS], int NUM_PLAYERS, int POINTS)
{
    double maximum = pscores[0][POINTS];
    int maxIndex;

    for(int i = 1; i<NUM_PLAYERS; i++)
    {
        if(maximum < pscores[i][POINTS])
        {
            maximum = pscores[i][POINTS];
            maxIndex = i;
        }
    }
    return maxIndex;
}