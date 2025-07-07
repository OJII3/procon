#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t, a;
    cin >> n >> t >> a;

    if (floor(n / 2.0) < t || floor(n / 2.0) < a) 
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
