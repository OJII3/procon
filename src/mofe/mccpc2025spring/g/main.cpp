#include <bits/stdc++.h>

using namespace std;

int main() {
    uint64_t t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        uint64_t n;
        cin >> n;
        uint64_t a = (uint64_t)n / 2;
        int rest = a % 2;

        uint64_t b = (uint64_t)a / 2;

        cout << b + rest << endl;
    }

    return 0;
}
