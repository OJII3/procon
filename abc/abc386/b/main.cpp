#include <bits/stdc++.h>

using namespace std;

int main(void) {
    string s;
    cin >> s;

    int count = 0;
    int tmp = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i == 0) {
            if (s[i] == '0') {
                ++tmp;
            } else {
                ++count;
            }
            continue;
        }

        if (i == s.size() - 1) {
            if (s[i] == '0') {
                ++tmp;
                count += tmp / 2 + tmp % 2;
            } else {
                count += 1 + tmp / 2 + tmp % 2;
            }
            break;
        }

        if (s[i] == '0') {
            ++tmp;
        } else {
            count += 1 + tmp / 2 + tmp % 2;
            tmp = 0;
        }
    }

    cout << count << endl;

    return 0;
}
