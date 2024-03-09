#include <bits/stdc++.h>

using namespace std;

int main() {
  unsigned long long total = 0;
  for (int i = 0; i < 64; ++i) {
    int ai;
    cin >> ai;
    if (ai == 1) {
      long double x = 2;
      long double y = i;
      total += pow(x, y);
    }
  }
  cout << total << endl;
  return 0;
}
