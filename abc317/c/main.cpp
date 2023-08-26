#include <bits/stdc++.h>

using namespace std;

struct node {
  vector<pair<int, int>> connected = {};
  bool checked = false;
};

int main() {
  long long n, m;
  cin >> n >> m;
  vector<node> network(n);

  for (int i = 0; i < m; ++i) {
    int a, b, c;
    cin >> a >> b >> c;
    network[a - 1].connected.push_back(pair<int, int>(b, c));
    network[b - 1].connected.push_back(pair<int, int>(a, c));
  }

  long long sum_max = 0;
  auto dfs = [&](auto &dfs, auto cityIndex, auto network, auto sum) -> void {
    network[cityIndex].checked = true;
    for (int j = 0; j < network[cityIndex].connected.size(); ++j) {
      if (network[cityIndex].connected[j].first - 1 != cityIndex &&
          !network[network[cityIndex].connected[j].first - 1].checked) {
        dfs(dfs, network[cityIndex].connected[j].first - 1, network,
            sum + network[cityIndex].connected[j].second);
      }
    }
    if (sum_max < sum) {
      sum_max = sum;
    }
    return;
  };

  for (int i = 0; i < n; ++i) {
    dfs(dfs, i, network, 0);
  }

  cout << sum_max << endl;
}
