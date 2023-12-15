


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cout<<"Enter the name of the input file."<<endl<<endl;
//     string inputFile;
//     cin>>inputFile;

//     char text, ch = '"';
//     string array;
//     int count_line = 0, count_letter = 0, count_character = 0;

//     ifstream inFile;
//     inFile.open(inputFile);

//     int count_letter_array[26] = {0};

//     if(inFile)
//     {
//         while(inFile >> array)

//         inFile.close();

//         if(array.size() >= 1)
//         {
//             for(int i = 0; i<array.size(); i++)
//             {
//                 if(array[i] == '\n')  count_line++;

//                 else if(array[i] >= 'A' && array[i] <= 'Z') 
//                 {
//                     count_letter++;
//                     count_letter_array[array[i] - 'A']++;

//                 }
//                 else if(array[i] >= 'a' && array[i] <= 'z')
//                 {
//                     count_letter++;
//                     count_letter_array[array[i] - 'a']++;
//                 }
//                 count_character++;
//             }

//             cout<<"Lines read = "<<count_line<<endl;
//             cout<<"Characters read = "<<count_character<<endl;
//             cout<<"Letters read = "<<count_letter<<endl<<endl;

//             cout<<"The individual letter totals were:"<<endl;

//             for(int i = 0; i<26; i++)
//                 cout<<char (i+'A')<<"'s = "<<count_letter_array[i]<<endl;
//         }

//         else 
//         cout<<ch<<inputFile<<ch<<" was empty."<<endl;
//     }

//     else 
//         cout<<"Error, unable to open "<<ch<<inputFile<<ch<<"."<<endl;

//     return 0;
// }