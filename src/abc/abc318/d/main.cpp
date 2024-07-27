#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector graph(n, vector<int>(n, -1));
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      cin >> graph[i][j];
    }
  }

  int max = 0;
  auto dfs = [&](auto &dfs, int now, int cost, auto &visited) -> void {
    for (int i = 0; i < graph[now].size() - 1; ++i) {
      if (graph[now][i] != -1 && !visited.count(i) && !visited.count(now) &&
          i != now) {
        visited.insert(i);
        max = std::max(max, cost + graph[now][i]);
      }
      dfs(dfs, i, graph[now][i] + cost, visited);
    }
  };

  for (int i = 0; i < n - 1; ++i) {
    set<int> visited;
    dfs(dfs, i, 0, visited);
  }
  cout << max << endl;
}
