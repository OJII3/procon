#include <bits/stdc++.h>
#include <utility>
using namespace std;

bool checkConnection(string before, string after) {
  if (before == "s" && after == "n")
    return true;
  if (before == "n" && after == "u")
    return true;
  if (before == "u" && after == "k")
    return true;
  if (before == "k" && after == "e")
    return true;
  if (before == "e" && after == "s")
    return true;
  else
    return false;
}

bool proceed(vector<vector<char>> &s, pair<int, int> cur) {
  if (cur.first == s[0].size() - 1 && cur.second == s.size() - 1) {
    return true;
  }

  if (cur.first < s[0].size() - 1) {
    bool tf =
        checkConnection(s[cur.first][cur.second], s[cur.first + 1][cur.second]);
    if (tf) {
      auto newCur = {cur.first + 1, cur.second};
      proceed(&s, newCur);
    }
  }

  if (cur.second < s.size() - 1) {
    bool tf =
        checkConnection(s[cur.first][cur.second], s[cur.first + 1][cur.second]);
    if (tf) {
      auto newCur = {cur.first, cur.second + 1};
      proceed(&s, newCur);
    }
  }

  return true;
}

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<string>> s(h, vector<string>(w));

  return 0;
}
