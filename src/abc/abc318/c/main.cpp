#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, d, p;
  cin >> n >> d >> p;
  vector<int> f(n);

  for (auto &it : f) {
    cin >> it;
  }

  vector<int> f_sums;
  sort(f.begin(), f.end());
  for (int i = 0; i < n; ++i) {
    f_sums.push_back(i == 0 ? f[0] : f_sums[i - 1] + f[i]);
    if ((i + 1) % d == 0) {
      auto num = (i + 1) / d;
      if (f_sums[i] <= p * num) {
        cout << num << endl;
        return 0;
      }
    }
  }
}
