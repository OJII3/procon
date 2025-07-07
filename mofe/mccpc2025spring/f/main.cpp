#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    long score = 0;
    long power = 0;

    vector<pair<long, long>> vec(0);

    for (int i = 0; i < n; ++i) {
        long a, b;
        cin >> a >> b;
        vec.emplace_back(a, b);
    }

    sort(vec.begin(), vec.end(), [&](auto x, auto y) -> int {
        if (x.second == 0 && y.second == 0) {
            return x.first > y.first;
        }
        if (y.second == 0) {
            return 0;
        }
        if (x.second == 0) {
            return 1;
        }
        return x.first > y.first;
    });

    for (int i = 0; i < n; ++i) {
        // cout << "a: " << vec[i].first << ", b: " << vec[i].second << endl;
        power += vec[i].first;
        if (vec[i].second != 0) {
            score += vec[i].second + power;
        }
    }

    cout << score << endl;

    return 0;
}
