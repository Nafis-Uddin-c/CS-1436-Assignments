/* pseudocode
1) declare the function prototype and take input inside the main function
2) use a while loop and check if input is less than 1 prompt to enter above zero then take input again
3) start checking from 2
4) use a while loop and check if number is not equal to count
    call the isPrime() function and inside that function use flag 
    also use for loop and run it for the times of the checked_number
    if (checked_number % i == 0) assign flag = false and use break
5) outside the for loop return flag
6) inside the main function check if isPrime() is true then 
    call the printPrimeNumbers() and inside that function print the numberOfPrimes
7) also increase the count by 1 and check if (count % 10 == 0) print a new line
8) inside the while loop increase checked_number by 1

*/


#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int);
void printPrimeNumbers(int);

int main()
{
    int number;
    cin>>number;

    while(number < 1)
    {
        cout<<"Enter the Number above zero: "<<endl;
        cin>>number;
    }

    int checked_number = 2;
    int count = 0;

    cout<<"The first "<<number<<" prime numbers are "<<endl;

    while(number != count)
    {
        isPrime(checked_number);

        if(isPrime(checked_number) == true)
        {
            printPrimeNumbers(checked_number);
            count++;
            if(count % 10 == 0) cout<<endl;    
        }

        checked_number++;
    }

    return 0;
}

bool isPrime(int checked_number)
{
    bool flag = true;

    for(int i = 2; i<checked_number; i++)
    {
        if(checked_number % i == 0) 
        {
            flag = false;
            break;
        }
    }

    return flag;
}
   
void printPrimeNumbers(int numberOfPrimes)
{
    cout<<right<<setw(4)<<numberOfPrimes;
}

/*
input
100
output
The first 100 prime numbers are 
   2   3   5   7  11  13  17  19  23  29
  31  37  41  43  47  53  59  61  67  71
  73  79  83  89  97 101 103 107 109 113
 127 131 137 139 149 151 157 163 167 173
 179 181 191 193 197 199 211 223 227 229
 233 239 241 251 257 263 269 271 277 281
 283 293 307 311 313 317 331 337 347 349
 353 359 367 373 379 383 389 397 401 409
 419 421 431 433 439 443 449 457 461 463
 467 479 487 491 499 503 509 521 523 541
*/
   

   