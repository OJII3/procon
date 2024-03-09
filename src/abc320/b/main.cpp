#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int max = 0;
  string sub;
  for (auto i = 0UL; i < s.size(); ++i) {
    for (auto j = i; j < s.size(); ++j) {
      sub = s.substr(i, j - i + 1);
      int flag = true;
      for (auto k = 0UL; k < sub.size(); ++k) {
        if (sub[k] != sub[sub.size() - k - 1]) {
          flag = false;
          break;
        }
      }
      if (flag && sub.size() > max) {
        max = sub.size();
      }
    }
  }
  cout << max << endl;
}
