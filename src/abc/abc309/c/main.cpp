#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<vector<int>> ab(n, vector<int>(2));
  for (int i = 0; i < n; ++i) {
    cin >> ab[i][0] >> ab[i][1];
  }
  sort(ab.begin(), ab.end(),
       [&](auto x, auto y) -> bool { return x[0] > y[0]; });

  int num = 0;
  int day = 1e9;
  for (int i = 0; i < n; i++) {
    num += ab[i][1];
    day = ab[i][0];
    if (num > k) {
      cout << day + 1 << endl;
      return 0;
    }
  }
  cout << 1 << endl;
  return 0;
}
