#include <bits/stdc++.h>

using namespace std;

int main() {
    int v;
    int a[3];

    cin >> v >> a[0] >> a[1] >> a[2];

    int acc = 0;
    for (int i = 0; i < 1e6; i++) {
        acc += a[i % 3];
        if (acc > v) {
            if (i % 3 == 0) {
                cout << "F" << endl;
            } else if (i % 3 == 1) {
                cout << "M" << endl;
            } else {
                cout << "T" << endl;
            }

            return 0;
        }
    }
}
