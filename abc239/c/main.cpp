#include <bits/stdc++.h>

using namespace std;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  vector<pair<int, int>> cand{
      {0, 0}, {1, 1}, {3, 3}, {0, 2}, {0, 4}, {2, 0},
      {4, 0}, {2, 4}, {4, 2}, {1, 3}, {3, 1},
  };

  for (const auto &it : cand) {
    if (x1 + it.first == x2 && y1 + it.second == y2) {
      cout << "Yes" << endl;
      return 0;
    }
    if (x1 - it.first == x2 && y1 + it.second == y2) {
      cout << "Yes" << endl;
      return 0;
    }
    if (x1 + it.first == x2 && y1 - it.second == y2) {
      cout << "Yes" << endl;
      return 0;
    }
    if (x1 - it.first == x2 && y1 - it.second == y2) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}
