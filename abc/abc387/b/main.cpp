#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int x;
    cin >> x;

    int sum = 0;
    for (int i = 1; i <= 9; ++i) {
        sum += i * (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9);
    }

    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            if (i * j == x) {
                sum -= x;
            }
        }
    }

    cout << sum << endl;

    return 0;
}
