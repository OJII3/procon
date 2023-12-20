#include <bits/stdc++.h>

using namespace std;

auto main() -> int {
#define int long long

    int n = 0;
    cin >> n;

    vector<pair<int, int>> collection{};

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            int ex = 0;

            while (n % i == 0) {
                n /= i;
                ++ex;
            }

            collection.emplace_back(i, ex);
        }
    }
    if (n != 1) {
        collection.emplace_back(n, 1);
    }

    int count = 0;
    for (auto &it : collection) {
        if (it.second <= 2) {
            ++count;
        } else {
            int segment = 1;
            while (it.second > segment + 1) {
                ++count;
                it.second -= segment;
                ++segment;
            }
            if (it.second > 0) {
                ++count;
            }
        }
    }

    cout << count << endl;
}
