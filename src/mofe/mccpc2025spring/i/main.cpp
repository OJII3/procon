#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < n; ++i) {
        if (i + 1 == a[i]) {
            cout << a[i] << endl;
            return 0;
        }
        if (i + 1 > a[i]) {
            cout << i << endl;
            return 0;
        }
    }
    cout << n << endl;

    /* edge cases
    100 99 0 -> 2
    4 3 1 -> 2
    8 7 6 5 1 -> 4
    10 9 8 2 1 -> 3
    1 -> 1
    3 -> 1
    9 8 7 -> 3
    */

    return 0;
}
