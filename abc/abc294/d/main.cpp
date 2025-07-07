#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    set<int> uncalled;
    set<int> called;
    for (int i = 1; i <= n; ++i) {
        uncalled.insert(i);
    }
    vector<int> a;

    for (int i = 0; i < q; ++i) {
        int e;
        cin >> e;
        if (e == 1) {
            // get minimum uncalled
            int x = *uncalled.begin();
            uncalled.erase(x);
            called.insert(x);
        } else if (e == 2) {
            int x;
            cin >> x;
        } else if (e == 3) {
            int x = *called.begin();
            called.erase(x);
            a.push_back(x);
        }
    }

    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << endl;
    }
}
