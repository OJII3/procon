#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<string> output(n);

    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < n; ++j) {
            int a;
            cin >> a;
            if (s[a - 1] != '.') output[j] += s[a - 1];
        }
    }

    for (int i = 0; i < n; ++i) {
        if (output[i] == "") {
            cout << "#" << endl;
        } else {

        cout << output[i] << endl;
        }
    }
}
