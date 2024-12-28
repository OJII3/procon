#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int k;
    string s, t;
    cin >> k >> s >> t;

    if (s == t) {
        cout << "Yes" << endl;
        return 0;
    }

    if (t.size() + 1 == s.size()) {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != t[i]) {
                string cpy;
                copy(s.begin(), s.end(), back_inserter(cpy));
                cpy.erase(i, 1);
                if (cpy == t) {
                    cout << "Yes" << endl;
                    return 0;
                }
                cout << "No" << endl;
                return 0;
            }
            if (i == t.size()) {
                cout << "Yes" << endl;
                return 0;
            }
        }
        cout << "No" << endl;
    }

    if (t.size() == s.size() + 1) {
        for (int i = 0; i < t.size(); ++i) {
            if (s[i] != t[i]) {
                string cpy;
                copy(s.begin(), s.end(), back_inserter(cpy));
                cpy.insert(i, 1, t[i]);
                if (cpy == t) {
                    cout << "Yes" << endl;
                    return 0;
                }
                cout << "No" << endl;
                return 0;
            }
            if (i == t.size()) {
                cout << "Yes" << endl;
                return 0;
            }
        }
        cout << "No" << endl;
    }

    if (s.size() == t.size()) {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != t[i]) {
                string cpy;
                copy(s.begin(), s.end(), back_inserter(cpy));
                cpy.erase(i, 1);
                cpy.insert(i, 1, t[i]);
                if (cpy == t) {
                    cout << "Yes" << endl;
                    return 0;
                }
                cout << "No" << endl;
                return 0;
            }
            if (i == s.size()) {
                cout << "Yes" << endl;
                return 0;
            }
        }
        cout << "No" << endl;
    }

    cout << "No" << endl;
    return 0;
}
