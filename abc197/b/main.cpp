#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  vector<string> s(h);
  for (int i = 0; i < h; ++i) {
    cin >> s[i];
  }

  int count = 0;

  for (int i = 0; i < w - y; ++i) {
    if (s.at(x - 1).at(y - 1 + i) == '#') {
      break;
    } else
      count++;
  }

  for (int i = 0; i < y; ++i) {
    if (s[x - 1].at(y - 1 - i) == '#') {
      break;
    } else
      count++;
  }

  for (int i = 0; i < h - x; ++i) {
    if (s[x - 1 + i][y - 1] == '#')
      break;
    else
      count++;
  }

  for (int i = 0; i < x; ++i) {
    if (s[x - 1 - i][y - 1] == '#')
      break;
    else
      count++;
  }

  cout << (count == 0 ? 0 : count - 3) << endl;
  return 0;
}
