#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  string out = "";
  string aeiou = "aeiou";
  for (auto s_ : s) {
    if (aeiou.find(s_) == string::npos) {
      out += s_;
    }
  }
  cout << out << endl;
  return 0;
}
