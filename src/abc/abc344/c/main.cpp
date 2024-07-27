#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, l, q;
    vector<int> a, b, c, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        a.push_back(ai);
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        int bi;
        cin >> bi;
        b.push_back(bi);
    }

    cin >> l;
    for (int i = 0; i < l; i++) {
        int ci;
        cin >> ci;
        c.push_back(ci);
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        int xi;
        cin >> xi;
        x.push_back(xi);
    }

    set<int> candidates;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < l; k++) {
                candidates.insert(a[i] + b[j] + c[k]);
            }
        }
    }

    for (int i = 0; i < q; i++) {
        if (i == q - 1) {
            cout << (candidates.count(x[i]) ? "Yes" : "No") << endl;
        } else {
            cout << (candidates.count(x[i]) ? "Yes\n" : "No\n");
        }
    }
    return 0;
};
