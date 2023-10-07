#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
    int cnt = 0;
    for (const auto &it : s[i]) {
      if (it == 'o') {
        cnt++;
      }
    }
    v[i] = make_pair(i + 1, cnt);
  }

  sort(v.begin(), v.end(),
       [&](const pair<int, int> &a, const pair<int, int> &b) {
         if (a.second != b.second) {
           return a.second > b.second;
         } else {
           return a.first < b.first;
         }
       });

  for (int i = 0; i < n; i++) {
    if (i != n - 1)
      cout << v[i].first << " ";
    else
      cout << v[i].first << endl;
  }

  return 0;
}
