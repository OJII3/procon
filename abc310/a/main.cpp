#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, p, q;
  cin >> n >> p >> q;
  int min = 1e5;
  for (int i = 0; i < n; i++) {
    int di;
    cin >> di;
    min = min > di ? di : min;
  }

  if (min + q > p) {
    cout << p << endl;
  } else {
    cout << min + q << endl;
  }

  return 0;
}
