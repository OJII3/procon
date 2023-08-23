#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, pair<string, int>>> sp(n);
  for (int i = 0; i < n; i++) {
    sp[i].first = i + 1;
    cin >> sp[i].second.first >> sp[i].second.second;
  }

  sort(sp.begin(), sp.end(), [](auto &a, auto &b) {
    if (a.second.first == b.second.first) {
      return a.second.second > b.second.second;
    }
    return a.second.first < b.second.first;
  });
  for (auto &i : sp) {
    cout << i.first << endl;
  }
  return 0;
}
