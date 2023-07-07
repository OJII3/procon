#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<string>> s(h, vector<string>(w));

  vector<char> next(256);
  next['s'] = 'n';
  next['n'] = 'u';
  next['u'] = 'k';
  next['k'] = 'e';
  next['e'] = 's';

  return 0;
}
