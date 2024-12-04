#include <bits/stdc++.h>

#include <cstddef>
#include <cstdint>
#include <string>

using namespace std;

int main() {
    uint64_t n, k;
    cin >> n >> k;

    while ((k--) != 0) {
        if (n % 200 == 0) {
            n = (n / 200);
        } else {
            auto str = to_string(n);
            str += "200";
            n = 0;
            for (uint64_t i = 0; i < str.size(); ++i) {
                n += uint64_t(pow(10, i) * (str[str.size() - i - 1] - '0'));
            }
        }
    }

    cout << n << endl;
}
