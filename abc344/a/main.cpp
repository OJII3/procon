#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;

  string out;
  bool in = false;
  for (auto &c : s) {
        if (c == '|') {
      in = !in;
        }
    if (c != '|' && !in) {
      out += c;
    } else {
    }
  }

  cout << out << endl;
  return 0;
}
