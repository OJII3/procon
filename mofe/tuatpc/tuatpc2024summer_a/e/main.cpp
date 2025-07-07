#include <bits/stdc++.h>

#include <cassert>
using namespace std;

int main() {
    int n;
    cin >> n;
    // assert(n < 100);

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (a[i] != a[j] && a[i] != a[k] && a[j] == a[k]) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}
