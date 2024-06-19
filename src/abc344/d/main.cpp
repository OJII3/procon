#include <bits/stdc++.h>

using namespace std;

int main() {
    string t;
    cin >> t;
    int n;
    cin >> n;
    auto v = vector<vector<string>>(n);

    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        for (int j = 0; j < ai; j++) {
            string s;
            cin >> s;
            v[i].push_back(s);
        }
        v[i].emplace_back("");
    }

    int min = INT_MAX;
    auto solve = [&](auto solve, string s, int count, int current) -> void {
        if (s == t) {
            min = std::min(min, count);
            return;
        }
        for (int i = current; i < n; ++i) {
            for (int j = 0; j < v[i].size(); ++j) {
                if (v[i][j] == "") {
                    solve(solve, s, count, i + 1);
                } else {
                    solve(solve, s + v[i][j], count + 1, i + 1);
                }
            }
        }
    };

    solve(solve, "", 0, 0);

    if (min == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << min << endl;
    }
}
