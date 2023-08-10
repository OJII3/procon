#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  string out = "";
  for (int i = 0; i < s.length(); i += 2) {
    out.push_back(s[i]);
  }
  cout << out << endl;
  return 0;
}
