#include <iostream>
using namespace std;

int brithdayCakeCandels(int candles[], int x, int index, int max_height, int count) {
    if (index == x) return count;

    if (candles[index] > max_height) {
        return brithdayCakeCandels(candles, x, index + 1, candles[index], 1);
    } else if (candles[index] == max_height) {
        return brithdayCakeCandels(candles, x, index + 1, max_height, count + 1);
    } else {
        return brithdayCakeCandels(candles, x, index + 1, max_height, count);
    }
}

int main() {
    int x;
    cout << "enter the number of candles: ";
    cin >> x;
    int candles[x];
    cout << "enter the candels: ";
    for (int i = 0; i < x; i++) {
        cin >> candles[i];
    }

    cout << "Tallest candles count (recursive): "
         << brithdayCakeCandels(candles, x, 0, 0, 0) << endl;

    return 0;
}
