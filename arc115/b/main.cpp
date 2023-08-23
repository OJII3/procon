#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> s(n, vector<int>(n));
  vector<int> a(n), b(n);
  for (auto &i : s) {
    for (auto &j : i) {
      cin >> j;
    }
  }

  bool flag_all = false;
  for (int i = 0; i < n; i++) {
    b = s[i];
    bool flag = true;
    for (int j = 0; j < n; j++) {
      a[i] = s[i][j] - b[j];
      flag &= a[i] >= 0;
    }
  }

  if (flag_all) {
    cout << "Yes" << endl;
    for (int k = 0; k < n; k++) {
      if (k == n - 1) {
        cout << a[k] << endl;
      } else {
        cout << a[k] << " ";
      }
    }

    for (int k = 0; k < n; k++) {
      if (k == n - 1) {
        cout << b[k] << endl;
      } else {
        cout << b[k] << " ";
      }
    }
  }
}
