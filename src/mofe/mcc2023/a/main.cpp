#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector rails(m, vector<int>());

  for (int i = 0; i < m; ++i) {
    int k;
    cin >> k;
    rails[i].resize(k);
    for (int j = 0; j < k; ++j) {
      cin >> rails[i][j];
    }
  }

  sort(rails.begin(), rails.end());

  int c = 0;

  auto next = [&](auto next, int nowr, int nows) -> void {
    int size = rails[nowr].size();
    nows = rails[nowr][size - 1];
    if (nows == n) {
      return;
    } else {
      ++c;
    }
    int nextr = nowr;
    for (int i = 0; i < m; ++i) {
      if (rails[m - i - 1][0] <= nows) {
        nextr = m - i - 1;
        break;
      }
    }
    next(next, nextr, nows);
  };

  next(next, 0, 1);

  cout << c << endl;

  return 0;
}
