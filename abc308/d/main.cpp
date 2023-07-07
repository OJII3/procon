#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);

  for (int i = 0; i < h; ++i) {
    cin >> s[i];
    cout << s[i] << endl;
  }
  if (s[0][0] != 's') {
    cout << "No" << endl;
    return 0;
  }

  vector<char> next(256);
  next['s'] = 'n';
  next['n'] = 'u';
  next['u'] = 'k';
  next['k'] = 'e';
  next['e'] = 's';

  vector<vector<bool>> seen(h, vector<bool>(w));

  auto dfs = [&](auto &dfs, int y, int x) -> void {

  };

  return 0;
}
