#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> a(n);
  for (auto &ai : a) {
    cin >> ai;
  }
  vector<string> b = a;
  b[0] = '0' + a[0].substr(0, n - 1);
  b[n - 1] = a[n - 1].substr(1, n) + '0';

  for (int i = 0; i < n; ++i) {
    if (i == 0) {
      b[0][n - 1] = a[0][n - 2];
    } else {

      b[i][n - 1] = a[i - 1][n - 1];
    }
  }

  for (int i = n - 1; i >= 0; --i) {
    if (i == n - 1) {
      b[n - 1][0] = a[n - 1][1];
    } else {
      b[i][0] = a[i + 1][0];
    }
  }

  for (auto &&bi : b) {
    cout << bi << endl;
  }
  return 0;
}
