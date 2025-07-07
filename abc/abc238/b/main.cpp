#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> cut(n);
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        if (i == 0)
            cut[i] = tmp;
        else {
            cut[i] = (cut[i - 1] + tmp) % 360;
        }
    }

    cut.push_back(360);

    sort(cut.begin(), cut.end());

    int max = 0;
    for (int i = 0; i < n + 1; ++i) {
        if (i == 0) {
            int tmp = cut[i];
            max = max < tmp ? tmp : max;
        } else {
            int tmp = cut[i] - cut[i - 1];
            max = max < tmp ? tmp : max;
        }
    }

    cout << max << endl;
}
