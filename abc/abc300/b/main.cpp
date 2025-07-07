#include <bits/stdc++.h>

#include <algorithm>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> a(h);
    vector<string> b(h);

    for (int i = 0; i < h; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < h; i++) {
        cin >> b[i];
        b[i] += b[i];
    }

    for (int i = 0; i < h; i++) {
        int s = -1, t = -1;
        t = b[i].find(a[0]);
        while (t != string::npos) {
            s = i;

            for (int j = 0; j < h; j++) {
                /* cout << "s: " << s << " t: " << t << endl; */
                if (a[j] != b[(s + j) % h].substr(t, w)) {
                    t = b[i].find(a[0], t + 1);
                    s = -1;
                    /* cout << "s: " << s << " t: " << t << endl; */
                    break;
                }
            }

            if (s != -1) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}
