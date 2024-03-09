#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  for (auto &it : a) {
    cin >> it;
  }

  vector<int> v(n);
  int now = 0;

  for (int i = 0; i < n; ++i) {
    if (a[now] == i + 1) {
      v[i] = 0;
      ++now;
    } else if (a[now] < i + 1) {
      ++now;
      v[i] = a[now] - i - 1;
    } else {
      v[i] = a[now] - i - 1;
    }
  }

  for (int i = 0; i < n; ++i) {
    cout << v[i] << (i == n - 1 ? "" : "\n");
  }
  cout << endl;
  return 0;
}
