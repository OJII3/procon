#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  for (auto &c : s) {
    if (c + n % 26 > 'Z') {
      c += (n % 26) - 26;
    } else {
      c += n % 26;
    }
  }
  cout << s << endl;
  return 0;
}
