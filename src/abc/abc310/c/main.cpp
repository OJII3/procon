#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  set<string> s;
  for (int i = 0; i < n; i++) {
    string si;
    cin >> si;
    s.insert(si);
  }

  set<string> news;
  for (string si : s) {
    string orig_si = si;
    reverse(si.begin(), si.end());
    if (news.find(si) == news.end() && news.find(orig_si) == news.end()) {
      news.insert(si);
    }
  }

  cout << news.size() << endl;
  return 0;
}
