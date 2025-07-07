#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    if (a <= b) x = ((int)(x * 0.8) / 10) * 10;
    if (x > y) {
        cout << y << endl;
    } else {
        cout << x << endl;
    }

    return 0;
}
