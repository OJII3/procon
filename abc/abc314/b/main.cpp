#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(n);
  for (int i = 0; i < n; ++i) {
    int c;
    cin >> c;
    a[i].reserve(c);
    for (int j = 0; j < c; ++j) {
      int temp;
      cin >> temp;
      a[i].push_back(temp);
    }
  }
  int x;
  cin >> x;

  vector<int> ans;
  int min = 100;
  for (int i = 0; i < n; ++i) {
    if (find(a[i].begin(), a[i].end(), x) != a[i].end()) {
      if (a[i].size() < min) {
        min = a[i].size();
        ans.clear();
        ans.push_back(i + 1);
      } else if (a[i].size() == min) {
        ans.push_back(i + 1);
      }
    }
  }
  cout << ans.size() << endl;
  if (ans.size() == 0) {
    cout << endl;
    return 0;
  }
  for (int i = 0; i < ans.size(); ++i) {
    if (i == ans.size() - 1)
      cout << ans[i] << endl;
    else
      cout << ans[i] << " ";
  }
}
