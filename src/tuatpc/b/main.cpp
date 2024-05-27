#include <bits/stdc++.h>

using namespace std;
// a と b の最大公約数を返す関数
long long GCD(long long a, long long b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
}

int main() {
    int t;
    cin >> t;


    for (int i=0; i < t; ++i) {
        long long a, b;
        cin >> a >> b;

        if (a < b) {
            cout << "1 " << a << endl;
        } else {
            int tmp = (a % b == 0) ? int(a/b) : int(a /b) + 1;
            int gcd = GCD(a, tmp);
            cout << (tmp/gcd) << " " << (a/gcd) << endl;
        }
    }

    return 0;
}
