#include <bits/stdc++.h>

using namespace std;

auto main() -> int {
#define int long long
    int n = 0;
    cin >> n;

    vector<pair<int, int>> collection{};

    int min = 1e12;

    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            min = i + n / i - 2;
        }
    }

    cout << min << endl;

    return 0;
}
