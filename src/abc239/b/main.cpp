#include <bits/stdc++.h>

using namespace std;

int main() {
  long long x;
  cin >> x;

  if (x >= 0) {
    auto ans = x / 10;
    cout << ans << endl;
  } else if (x % 10 == 0) {
    auto ans = x / 10;
    cout << ans << endl;
  } else {
    auto ans = x / 10;
    cout << ans - 1 << endl;
  }

  return 0;
}
