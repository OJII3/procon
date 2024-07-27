#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long constant = 998244353;

    for (long long i = 0; i < constant; ++i) {
        if ((n - i) % constant == 0) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
