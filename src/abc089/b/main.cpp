#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  bool flagP = false, flagW = false, flagG = false, flagY = false;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    flagP = s == "P" ? true : flagP;
    flagW = s == "W" ? true : flagW;
    flagG = s == "G" ? true : flagG;
    flagY = s == "Y" ? true : flagY;
  }
  if (flagP && flagW && flagG && flagY) {
    cout << "Four" << endl;
  } else {
    cout << "Three" << endl;
  }
  return 0;
}
