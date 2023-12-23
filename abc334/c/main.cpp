#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n, make_pair(0, 2));

    for (int i = 0; i < n; i++) {
        v[i].first = i + 1;
    }

    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        v[x - 1].second = 1;
    }

    int min = 1e9;
    auto func = [](auto &func, int other, int current, int sum,
                   vector<pair<int, int>> v) -> void {
        for (int i = current; i < v.size(); i++) {
            if (v[i].second > 0) {
                sum += abs(v[i].first - other);
                v[i].second -= 1;
                current = i + 1;
                func(func, other, current, sum, v);
                cout << "other: " << other << " current: " << current
                     << " sum: " << sum << endl;
            }
        }
    };

    int sum = 0;
    func(func, 1, 0, sum, v);

    cout << sum << endl;
    return 0;
}
