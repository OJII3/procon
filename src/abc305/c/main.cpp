#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<int> row(w);
  vector<int> col(h);

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      char n;
      cin >> n;
      if (n == '#') {
        row[j] += 1;
        col[i] += 1;
      }
    }
  }

  int rmax = *max_element(row.begin(), row.end());
  int cmax = *max_element(col.begin(), col.end());

  vector<int>::iterator ritr = find(row.begin(), row.end(), rmax - 1);
  vector<int>::iterator citr = find(col.begin(), col.end(), cmax - 1);

  cout << 1 + distance(col.begin(), citr) << ' '
       << 1 + distance(row.begin(), ritr) << endl;

  return 0;
}
