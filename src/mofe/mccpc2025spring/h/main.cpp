#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    int si, sj, gi, gj;
    cin >> si >> sj >> gi >> gj;

    vector<vector<int>> e(h, vector<int>(w));

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cin >> e[i][j];
        }
    }

    // auto search = [&](int sx, int sy) -> void {
    //     if (e[sx][sy] == e[]
    // };
}
