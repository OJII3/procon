#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int fore = int(n / 5) * 5;
  if (abs(fore - n) > abs(fore + 5 - n))
    cout << fore + 5;
  else
    cout << fore;
  return 0;
}
