#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;

  if (t.substr(0, n) == s && t.substr(m - n, n) == s) {
    cout << 0 << endl;
  } else if (t.substr(0, n) == s) {
    cout << 1 << endl;
  } else if (t.substr(m - n, n) == s) {
    cout << 2 << endl;
  } else {
    cout << 3 << endl;
  }

  return 0;
}
