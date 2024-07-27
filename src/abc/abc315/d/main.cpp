#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<pair<char, bool>>> c(h, vector<pair<char, bool>>(w));
  int deleted = 0;
  for (auto &c_ : c) {
    for (auto &c__ : c_) {
      cin >> c__.first;
      c__.second = false;
    }
  }
  for (char s : "abcdefghijklmnopqrstuvwxyz") {
    int count = 0;
    int rowcount = 0;
    int colcount = 0;
    for (int i = 0; i < h; i++) {
      if (c[i][0].first == s) {
        rowcount++;
        count++;
        c[i][0].second = true;
      }
    }
    for (int i = 0; i < w; i++) {
      if (c[0][i].first == s) {
        colcount++;
        if (!c[0][i].second) {
          count++;
          c[0][i].second = true;
        }
      }
    }
    if (rowcount > 1 || colcount > 1) {
      deleted = count;
    }
  }
  cout << h * w - deleted << endl;
  return 0;
}
