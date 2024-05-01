#include <bits/stdc++.h>

using namespace std;

int main() {
  int a;
  vector<int> v;
  while (cin >> a) {
    v.push_back(a);
  }

  reverse(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << (i != v.size() ? "\n" : "");
  }
  return 0;
}
