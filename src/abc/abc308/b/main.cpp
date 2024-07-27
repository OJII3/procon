#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> c(n);
  vector<string> d(m);
  vector<int> p(m + 1);

  for (auto &ci : c) {
    cin >> ci;
  }

  for (auto &di : d) {
    cin >> di;
  }

  for (auto &pi : p) {
    cin >> pi;
  }

  int total = 0;

  for (auto ci : c) {
    for (int i = 0; i <= m; ++i) {
      if (i == m) {
        total += p[0];
      } else if (ci == d[i]) {
        total += p[i + 1];
        break;
      }
    }
  }

  cout << total << endl;

  return 0;
}
