#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;

    set<int> kinds;

    for (int i = 0; i < q; ++i) {
        int k;
        cin >> k;

        if (k == 1) {
            int x;
            cin >> x;
            kinds.insert(x);
        } else if (k == 2) {
            int x;
            cin >> x;
            kinds.erase(x);
        } else {
            cout << kinds.size() << endl;
        }
    }
}
