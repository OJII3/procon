#include <bits/stdc++.h>

using namespace std;

set<int> convert(vector<int> y) {
  set<int> s;
  for (auto x : y) {
    s.insert(x);
  }
  return s;
}

int main() {
  int n;
  cin >> n;
  vector<int> data(n);
  for (auto &d : data) {
    cin >> d;
  }
  auto s = convert(data);
  cout << s.size() << endl;
  return 0;
}
