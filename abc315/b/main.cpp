#include <bits/stdc++.h>

using namespace std;

int main() {
  int m;
  cin >> m;
  vector<int> d(m);
  vector<int> sum(m);
  for (int i = 0; i < m; i++) {
    int d_;
    cin >> d_;
    for (int j = i; j < m; j++) {
      sum[j] += d_;
    }
  }
  int half = (sum[m - 1] - 1) / 2;
  if (half == 0) {
    cout << 1 << " " << 1 << endl;
    return 0;
  }
  for (int i = 0; i < m; i++) {
    if (sum[i] > half) {
      cout << i + 1 << " " << half - sum[i - 1] + 1 << endl;
      return 0;
    }
  }
  return 0;
}
