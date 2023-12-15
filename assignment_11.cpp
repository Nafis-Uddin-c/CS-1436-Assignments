/* pseudocode
1) define the function prototype and take the size input and take two integer arrays
2) open the inputFile and take the input from there and increase the count by 1
3) check if the count is less than or equal to size then do the next steps
4) check if the input is between a to z then increase the count for that value
5) check if the input is between A to Z then increase the count for that value
6) else increase the symbol value
7) close the input file and call the function with character letter 'a'
8) inside the function it checks if the letter is 'a' 
9) it checks the count for every character and print those character counts if it's more than 0
    also increase the total count adding count[i] to it and return that value
10) call the function again with the perimeter 'A'
    inside the function it checks if the letter is 'A' then it repeats the 9 number
11) inside the main function it prints the count of non alphabets, smaller letter, capital letter, all the characters

*/



#include <bits/stdc++.h>
using namespace std;

int displayCounts(int count[], char letter, int size);

int main()
{
    int size, i = 0;
    cin>>size;

    char content;
    int count_lower[26] = {0}, count_upper[26] = {0};
    int count_symbol = 0;

    ifstream inFile;
    inFile.open("Ass10_fileread.txt");

    while(inFile>>content)
    {
        i++;
        if(i<= size)
        {
            if(content >= 'a' && content <= 'z')
                count_lower[content - 'a']++;

            else if(content >= 'A' && content <= 'Z')
                count_upper[content - 'A']++;

            else
                count_symbol++;
        }
    }


    inFile.close();

    int total_lower = displayCounts(count_lower, 'a', 26);
    cout<<endl;

    int total_upper = displayCounts(count_upper, 'A', 26);
    cout<<endl;

    cout<<"The number of non alphabets is "<< count_symbol <<endl;
    cout<<"The number of upper case alphabets is "<<total_upper<<endl;
    cout<<"The number of lower case alphabets is "<<total_lower<<endl;
    cout<<"The number of  alphabets is "<< (total_lower + total_upper) <<endl;
    cout<<"The number of characters is "<< (total_upper + total_lower + count_symbol) <<endl;

    return 0;
}

int displayCounts(int count[], char letter, int size)
{
    int total_lower = 0, total_upper = 0;
    if(letter == 'A')
    {
        for(int i = 0; i<26; i++)
        {
            if(count[i] > 0)
            {
                total_upper += count[i];
                cout<<"The letter "<< char(i+'A') <<" in index "<<i<<" occurs "<<count[i] <<" times"<<endl;
            }
        }

        cout<<"The total number of uppercase letters are "<<total_upper<<endl; 
    }

    else if(letter == 'a')
    {
        for(int i = 0; i<26; i++)
        {
            if(count[i] > 0)
            {
                cout<<"The letter "<< char(i+'a') <<" in index "<<i<<" occurs "<<count[i] <<" times"<<endl;
                total_lower += count[i];
            }
        }

        cout<<"The total number of lowercase letters are "<<total_lower<<endl; 

    }

    if(letter == 'a')
    return  total_lower;

    else if(letter == 'A')
    return  total_upper;
}