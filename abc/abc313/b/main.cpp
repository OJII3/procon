#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n + 1);
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
  }

  auto dfs = [&](auto &dfs, vector<bool> &seen, int v) -> void {
    seen[v] = true;

    for (auto next_v : g[v]) {
      if (seen[next_v]) {

      } else {
        dfs(dfs, seen, next_v);
      }
    }
  };

  for (int i = 1; i < n + 1; ++i) {
    vector<bool> seen;
    seen.assign(n + 1, false);
    dfs(dfs, seen, i);
    int sum = 0;
    for (int _seen : seen) {
      sum += _seen;
    }
    /* cout << i << ": " << sum << endl; */
    if (sum == n) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}
