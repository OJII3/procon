#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> p(n);
    vector<int> q(n);

    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        cin >> q[i];
    }

    set<int> num;
    auto dfs = [&](auto dfs, int current, int x) -> void {
        if (x > p[current - 1]) {
            dfs(dfs, q[current], x - p[current - 1]);
        } else {
            x = 0;
            num.insert(current);
            return;
        }
    };

    for (int i = 0; i < n; i++) {
        dfs(dfs, i + 1, m);
    }

    bool first = true;
    for (auto f : num) {
        if (first) {
            first = false;
            cout << f;
        } else {
            cout << " " << f;
        }
    }

    cout << endl;
}
