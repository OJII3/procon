#include <bits/stdc++.h>

using namespace std;

auto main() -> int {
  int n;
  cin >> n;

  set<string> collection{};

  for (int i=0; i< n; ++i) {
    string s;
    cin >> s;
    collection.insert(s);
  }

  cout << collection.size() << endl;
}
