#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    int ai;
    cin >> ai;
    a[i] = ai;
  }

  vector<int> biggers(k % n);
  vector<int> assorted;
  copy(a.begin(), a.end(), assorted);
  sort(assorted.begin(), assorted.end());
  for (int i = 0; i < k % n; ++i) {
    biggers[i] = assorted[i];
  }

  auto base = int(k / n);

  for (int i = 0; i < n; ++i) {
    if (find(biggers.begin(), biggers.end(), a[i]) != biggers.end()) {
      cout << base + 1 << endl;
    } else {
      cout << base << endl;
    }

    return 0;
  }
}
