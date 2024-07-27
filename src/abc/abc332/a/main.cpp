#include <bits/stdc++.h>

using namespace std;

auto main() -> int {
  int n = 0, s = 0, k = 0;
  cin >> n >> s >> k;

  int sum = 0;

  for (int i=0; i<n; ++i) {
    int p = 0, q = 0;
    cin >> p >> q;

    sum += p * q;
  }

  if (sum >= s) {
    cout << sum << endl;
  } else {
    cout << sum + k << endl;
  }
}
