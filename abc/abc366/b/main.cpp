#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);

    for (auto &it : s) {
        cin >> it;
    }

    for (int i = 0; i < 100; ++i) {
        string row = "";
        bool is_end = true;
        for (int j = n - 1; j >= 0; --j) {
            if (s[j].size() > i) {
                row += s[j][i];
                is_end = false;
            } else {
                row += '*';
            }
        }
        if (is_end) {
            break;
        }
            int index = row.find_last_not_of('*');
            if (index != string::npos) {
                row = row.substr(0, index + 1);
            }
            cout << row << endl;
    }
}
