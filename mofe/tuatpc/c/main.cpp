#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d;
    cin>> n >> d;

    string s;
    cin>> s;
    string out;

    bool flag = false;
    for (auto c : s) {
        if (c == '0' && !flag) {
            for (int j=0; j<d-n; ++j) {
                out += '1';
            }
            out += '0';
            flag = true;
        } else {
            out += c;
        }
    }

    if (!flag) {
        for (int j=0; j<d-n; ++j) {
            out += '1';
        }
    }

    cout << out << endl;
}
