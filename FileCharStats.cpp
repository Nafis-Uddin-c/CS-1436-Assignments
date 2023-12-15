/* pseudocode
1) take input file name from the user and open it
2) if the file opens take input from the file and increase the count line
3) run a for loop and check if the characters are between 'A' to 'Z' 
    then increase the letter count as well as counted letter
4) if the characters are between 'a' to 'z'  then increase letter count as welll as counted letter
5) increase the charcter count in every for loop
6) close the file and check if the character count is more than 0 then print the count line, 
    total character including line cause input is missing the enter character, though it should fix 
    print count letter and the counted letter 
7) when the character count is less than 0 use else the file is empty
8) when the file isn't exist  use else the file isn't exists


*/


#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    cout << "Enter the name of the input file." << endl << endl;
    string inputFile;
    cin >> inputFile;

    char ch = '"';
    string text;
    int count_line = 0, count_letter = 0, count_character = 0;
    int count_letter_array[26] = {0};

    ifstream inFile;
    inFile.open(inputFile);

    if (inFile) 
    {
        while (getline(inFile, text)) 
        {
            count_line++;

            for(int i = 0; i < text.size(); i++) 
            {
                if (text[i] >= 'A' && text[i] <= 'Z') 
                {
                    count_letter++;
                    count_letter_array[text[i] - 'A']++;
                } 

                else if (text[i] >= 'a' && text[i] <= 'z') {
                    count_letter++;
                    count_letter_array[text[i] - 'a']++;
                }
                count_character++;
            }
        }

        inFile.close();

        if(count_character > 0) 
        {
            cout << "Lines read = " << count_line << endl;
            cout << "Characters read = " << count_character + count_line << endl;
            cout << "Letters read = " << count_letter << endl << endl;

            cout << "The individual letter totals were:" << endl;

            for(int i = 0; i < 26; i++) 
            {
                cout << char(i + 'A') << "'s = " << count_letter_array[i] << endl;
            }
        } 
        
        else 
        {
            cout << ch << inputFile << ch << " was empty." << endl;
        }
    } 
    else 
    {
        cout << "Error, unable to open " << ch << inputFile << ch << "." << endl;
    }

    return 0;
}
