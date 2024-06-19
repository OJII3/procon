#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;

    if (s.size() != 8) {
        cout << "No" << endl;
        return 0;
    }

    vector<int> b;
    int r_passed = 0;
    int k = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'B') {
            b.push_back(i);
        }
        if (s[i] == 'R') {
            r_passed += 1;
        }
        if (s[i] == 'K' && r_passed == 1) {
            k = 1;
        }
    }

    if (b[0] % 2 == b[1] % 2) {
        cout << "No" << endl;
    } else if (k == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
