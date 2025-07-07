#include <bits/stdc++.h>

using namespace std;

struct Filled {
    int x, y;
    string color;
};

int main(void) {
    int n, m;
    cin >> n >> m;

    vector<Filled> filled;

    for (int i = 0; i < m; ++i) {
        int a, b;
        string c;
        cin >> a >> b >> c;
        filled.emplace_back(Filled{a, b, c});
    }

    sort(filled.begin(), filled.end(),
         [](const Filled &a, const Filled &b) { return a.x < b.x; });

    int current_white_y_min = 0;
    int current_black_y_max = n;
    for (int i = 0; i < m - 1; ++i) {
        if (filled[i].color == "W") {
            current_white_y_min = max(current_white_y_min, filled[i].y);
            if (filled[i].y > current_black_y_max) {
                cout << "No" << endl;
                return 0;
            }
        }
        if (filled[i].color == "B") {
            current_black_y_max = min(current_black_y_max, filled[i].y);
            if (filled[i].y > current_white_y_min) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
}
