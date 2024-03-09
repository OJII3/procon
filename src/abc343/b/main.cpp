#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  auto v = vector<vector<int>>(n);

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      int x;
      cin >> x;

      if (x == 1) {
        v[i].push_back(j + 1);
      }
    }
  }

  string out = "";

  for (int i = 0; i < n; ++i) {
    sort(v[i].begin(), v[i].end());
    for (int j = 0; j < v[i].size(); ++j) {
      out += to_string(v[i][j]) + (j + 1 == v[i].size() ? '\n' : ' ');
    }
  }
    if (out == "") {
        cout << endl;
    }

  cout << out;
}
