#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int total = 700;
  if (s.at(0) == 'o')
    total += 100;
  if (s.at(1) == 'o')
    total += 100;
  if (s.at(2) == 'o')
    total += 100;
  cout << total << endl;
  return 0;
}
