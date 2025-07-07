#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    set<int> current;
    set<int> captured;

    for (int i = 1; i <= n; i++) {
        int ti, xi;
        cin >> ti >> xi;

        if (ti == 1) {
            current.insert(xi);
        } else if (ti == 2) {
            current.erase(xi);
        } else {
            // add current items to captured
        }

        cout << "Current: " << current.size() << endl;
        cout << "Captured: " << captured.size() << endl;
    }

    cout << captured.size() << endl;
    auto vec = vector<int>(captured.begin(), captured.end());

    for (int i = 1; i <= vec.size(); i++) {
        if (i == m - 1) {
            cout << vec[i - 1] << endl;
        } else {
            cout << vec[i - 1] << " ";
        }
    }

    return 0;
}
