#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m; // n = 1, m <= 8, m側 のきらいな人に 1 が含まれない

  int k;
  cin >> k; // k <= 8
  vector<int> a(k);
  for (int i = 0; i < k; i++) {
    cin >> a[i];
  }

  if (1 + (m - k) > m) {
    cout << 1 + (m - k) << endl;
  } else {
    cout << m << endl;
  }

  return 0;
}
