/*pseudocode
1) initialize the variables
2) use while loop and write    while(count != NUMBER_OF_PRIMES)
3) take flag = 0
4) use for loop inside the while loop and write  for(int i = 2; i< number; i++)
5) inside the for loop check if(number % i == 0) then  flag = 1
6) outside the for loop check if(flag == 0) increase the count by 1 and print the number using setw(4) and right
7) take a int prev and check if((count != prev) && (count % 10 == 0))
    print a new line   and    prev = count
8) increase the number value by 1  writing number++

*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    const int NUMBER_OF_PRIMES = 50; // Number of primes to display
    const int NUMBER_OF_PRIMES_PER_LINE = 10; // Display 10 per line
    int count = 0; // Count the number of prime numbers
    int number = 2; // A number to be tested for primeness

    cout << "The first 50 prime numbers are \n";

    while(count != NUMBER_OF_PRIMES)
    {
        bool flag = 0;
        for(int i = 2; i< number; i++)
        {
            if(number % i == 0) flag = 1;
        }

        if(flag == 0) 
        {
            count++;
            cout<<right<<setw(4);
            cout<<number;
        }

        int prev;
        if((count != prev) && (count % 10 == 0)) 
        {
            cout<<endl;
            prev = count;
        }

        number++;
    }

   return 0;
}


/*
No input
Output is similar to the zylabs test
*/