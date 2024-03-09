#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  for (int i = 0; i < n; ++i) {
    cin >> h[i];
  }

  for (int i = 0; i < n; ++i) {
    if (h[i - 1] - h[i] > 1 || h[i] - h[i + 1] > 1) {
      cout << "No" << endl;
      return 0;
    }
    if (h[i] >= h[i - 1] && h[i] == h[i + 1] + 1) {
    }
  }

  cout << "Yes" << endl;

  return 0;
}
