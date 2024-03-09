#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> s(n), t(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  int moves = 0;
  for (int i = 0; i < m; i++) {
    cin >> t[i];
    auto it_left = find(s.begin(), s.end(), t[i]);
    cout << "it_left: " << *it_left << endl;
    auto it_right = find(s.rbegin(), s.rend(), t[i]);
    cout << "it_right: " << *it_right << endl;
    // if not exist
    if (it_left == s.end() || it_right == s.rend()) {
      moves = -1;
      break;
    }

    if (*it_left == 0 || *it_right == 0) {
      moves++;
      s = vector<int>(s.begin() + 1, s.end());
    } else if (it_left - s.begin() <= s.rend() - it_right - 1) {
      moves += it_left - s.begin();
      // shift left by it_left - s.begin()
      s = vector<int>(s.begin() + (it_left - s.begin()), s.end());
      moves++;
    } else {
      moves += s.rend() - it_right - 1;
      // shift right by s.rend() - it_right - 1
      s = vector<int>(s.begin(), s.end() - (s.rend() - it_right - 1));
      moves++;
    }
  }
  cout << moves << endl;
  return 0;
}
