#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (auto &it : a) {
        cin >> it;
    }

    sort(a.begin(), a.end());
    if (binary_search(a.begin(), a.end(), x)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
