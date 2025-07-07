#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int h, w;
    cin >> h >> w;

    int min = 1e9;
    int sum = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            int tmp;
            cin >> tmp;
            min = min < tmp ? min : tmp;
            sum += tmp;
        }
    }

    cout << ((sum - min * h * w)) << endl;
}
