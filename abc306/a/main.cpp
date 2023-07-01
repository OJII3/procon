#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  string out = "";
  for (auto si : s) {
    out.push_back(si);
    out.push_back(si);
  }
  cout << out << endl;
  return 0;
}
