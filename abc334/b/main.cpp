#include <bits/stdc++.h>

using namespace std;

int main() {
#define int long long
    int a, m, l, r;
    cin >> a >> m >> l >> r;

    int max = (r - a);
    int min = (l - a);

    if ((max - min) % m == 0 && min % m == 0) {
        cout << (max - min) / m + 1 << endl;
        return 0;
    }

    if (min == max && min % m != 0) {
        cout << 0 << endl;
        return 0;
    } else if (min == max && min % m == 0) {
        cout << 1 << endl;
        return 0;
    }

    cout << (max - min) / m + 1 << endl;

    return 0;
}
