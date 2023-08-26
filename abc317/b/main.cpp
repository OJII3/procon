#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  cin >> n;
  vector<long long> a(n);
  for (auto &it : a) {
    cin >> it;
  }
  sort(a.begin(), a.end());
  for (int i = 1; i < n; ++i) {
    if (a[i] != a[i - 1] + 1) {
      cout << a[i - 1] + 1 << endl;
      return 0;
    }
  }
}
