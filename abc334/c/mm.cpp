#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    set<int> a;
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        a.insert(x);
    }
    vector<int> v(n, 0);
    vector<bool> visited(n * 2 - k, false);
    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
        if (a.count(i + 1) == 0)
            v.push_back(i + 1);
    }

    int min = 1e9;

    auto func = [&min](auto &func, int current, int sum, vector<int> v,
                       vector<bool> visited) -> void {
        for (int i = current; i < v.size(); i++) {
            if (visited[i] == true)
                continue;
            for (int j = 0; j < v.size(); j++) {
                if (i == j)
                    continue;
                if (visited[j] == false) {
                    sum += abs(v[i] - v[j]);
                    visited[j] = true;
                    visited[i] = true;
                    current = i + 1;
                    func(func, current, sum, v, visited);
                    cout << "i: " << i << " j: " << j << " sum: " << sum
                         << endl;
                }
            }
        }

        if (sum < min) {
            min = sum;
        }
        sum = 0;
    };

    int sum = 0;
    func(func, 0, sum, v, visited);

    cout << min << endl;

    return 0;
}
