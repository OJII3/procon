#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  set<vector<int>> v;
  for (int i = 0; i < n; ++i) {
    int l;
    cin >> l;
    vector<int> vi(l);
    for (auto &vij : vi) {
      cin >> vij;
    }
    v.insert(vi);
  }
  cout << v.size() << endl;
  return 0;
}
