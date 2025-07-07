#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    int si, sj;
    cin >> si >> sj;
    int tmp = sj;
    sj = --si;
    si = --tmp;

    vector<string> c(h);
    for (int i = 0; i < h; ++i) {
        cin >> c[i];
    }

    auto moveL = [&](int y, int x) -> tuple<int, int> {
        if (x > 1 && c[y][x - 1] == '.') return make_tuple(y, x - 1);
        return make_tuple(y, x);
    };

    auto moveR = [&](int y, int x) -> tuple<int, int> {
        if (x < w - 1 && c[y][x + 1] == '.') return make_tuple(y, x + 1);
        return make_tuple(y, x);
    };

    auto moveU = [&](int y, int x) -> tuple<int, int> {
        if (y > 1 && c[y - 1][x] == '.') return make_tuple(y - 1, x);
        return make_tuple(y, x);
    };

    auto moveD = [&](int y, int x) -> tuple<int, int> {
        if (y < h - 1 && c[y + 1][x] == '.') return make_tuple(y + 1, x);
        return make_tuple(y, x);
    };

    string x;
    cin >> x;

    for (auto xi : x) {
        if (xi == 'L') {
            tie(sj, si) = moveL(sj, si);
        } else if (xi == 'R') {
            tie(sj, si) = moveR(sj, si);
        } else if (xi == 'U') {
            tie(sj, si) = moveU(sj, si);
        } else if (xi == 'D') {
            tie(sj, si) = moveD(sj, si);
        }
    }

    cout << ++sj << " " << ++si << endl;
}
