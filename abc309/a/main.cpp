#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (abs(a - b) == 1 && a + b != 7 && a + b != 13) {
    cout << "Yes" << endl;
  } else
    cout << "No" << endl;
  return 0;
}
