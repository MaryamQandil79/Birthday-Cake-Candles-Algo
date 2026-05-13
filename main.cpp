
#include <iostream>

using namespace std;

int birthdayCakeCandels(int candles[],int x)
{
    int max_height = candles[0];
    int count = 0;

    for (int i = 0; i < x; i++)
    {
        if (candles[i] > max_height)
        {
            max_height = candles[i];
            count = 1;
        }
        else if (candles[i] == max_height)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int x;
    cout << "enter number of candles: ";
    cin>>x;
    int candles[x];
    cout << "enter the candels: ";
    for(int i=0; i<x; i++)
    {
        cin>>candles[i];
    }

    cout << "Tallest candles count: " << birthdayCakeCandels(candles,x) << endl;
    return 0;
}
