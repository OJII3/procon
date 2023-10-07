#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  for (auto &it : a) {
    cin >> it;
  }
  int max = 0;
  vector<pair<int, vector<int>>> v(n);
  for (int i = 0; i < n; i++) {
    v[i].first = i + 1;
    string s;
    cin >> s;
    for (int j = 0; j < m; ++j) {
      if (s[j] == 'o') {
        v[i].first += a[j];
      } else {
        v[i].second.push_back(a[j]);
      }
    }

    if (max < v[i].first) {
      max = v[i].first;
    }
  }

  for (int i = 0; i < n; ++i) {
    if (v[i].first == max) {
      cout << 0 << endl;
    } else {
      sort(v[i].second.begin(), v[i].second.end(),
           [](int a, int b) { return a > b; });
      for (int j = 0; j < v[i].second.size(); ++j) {
        v[i].first += v[i].second[j];
        if (v[i].first > max) {
          cout << j + 1 << endl;
          break;
        }
      }
    }
  }

  return 0;
}
