#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void freq(int[], int, int[]);
void freq(int data[], int MAX_SIZE, int cnt[])
{
    for(int i = 0; i<MAX_SIZE; i++)
        cnt[data[i]]++;

    for(int i = 0; i<30; i++)
        if(cnt[i]>0) cout<<i<<" occurs "<<cnt[i]<<" times"<<endl;

}

int main()
{
    int seed;
    cin >> seed;
    srand(seed);

    const int MAX_SIZE = 100;
    const int MAX_NUM = 30;

    int data[MAX_SIZE];
    for(int i = 0; i<MAX_SIZE; i++)
        data[i] = rand()% MAX_NUM;

    int cnt[MAX_NUM] = {0};
    
    freq(data, MAX_SIZE, cnt);
    
    return 0;
}