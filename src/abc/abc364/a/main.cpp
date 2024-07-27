#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string prev;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (s == prev && s == "sweet" && i != n - 1) {
            cout << "No" << endl;
            return 0;
        }
        prev = s;
    }
    cout << "Yes" << endl;
}
