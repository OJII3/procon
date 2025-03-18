#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int x = 0, y = 0;
    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    x += 1;
    // b
    if (a == b)
        x += 1;
    else
        y += 1;

    // c
    if (a == c)
        x += 1;
    else
        y += 1;

    // d
    if (a == d)
        x += 1;
    else
        y += 1;

    if (s.size() != 2) {
        cout << "No" << endl;
        return 0;
    }

    if (x == 1 && y == 3 || x == 3 && y == 1) {
        cout << "Yes" << endl;
    } else if (x == 2 && y == 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
