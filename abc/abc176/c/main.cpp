#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    /* vector<int> a(n); */

    int c = 0;
    cin >> c;
    long long sum = 0;
    for (int i = 1; i < n; ++i) {
        int ai;
        cin >> ai;

        if (ai < c) {
            sum += c - ai;
        } else {
            c = ai;
        }
    }

    cout << sum << endl;
}
