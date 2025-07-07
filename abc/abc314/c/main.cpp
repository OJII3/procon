#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  vector<int> c(n);

  vector<vector<int>> v(m);
  for (int i = 0; i < n; ++i) {
    cin >> c[i];
    v[c[i] - 1].push_back(i);
  }

  string out = s;
  for (int i = 0; i < m; ++i) {
    vector<int> index;
    vector<int> values;
    for (int j = 0; j < n; ++j) {
      if (c[j] == i + 1) {
        index.push_back(j);
        values.push_back(s[j]);
      }
    }
    int len = index.size();

    for (int k = 0; k < len; ++k) {
      out[index[(k + 1) % len]] = values[k];
    }
  }

  cout << s << endl;
  return 0;
}
