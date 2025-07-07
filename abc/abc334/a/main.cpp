#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, g;
    cin >> b >> g;
    if (b > g) {
        cout << "Bat" << endl;
    } else if (b < g) {
        cout << "Glove" << endl;
    } else {
        cout << "E" << endl;
    }
    return 0;
}
