#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> l(n);
  for (auto &li : l) {
    cin >> li;
  }
  sort(l.begin(), l.end());
  int sum = 0;
  for (int i = 0; i < k; ++i) {
    sum += l[n - i - 1];
  }
  cout << sum << endl;
  return 0;
}
