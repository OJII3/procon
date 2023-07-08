#include <bits/stdc++.h>

using namespace std;

struct Pair {
  int a;
  int b;
};

int main() {
  int n1, n2, m;
  cin >> n1 >> n2 >> m;
  vector<Pair> ab(m);
  for (int i = 0; i < m; ++i) {
    cin >> ab[i].a >> ab[i].b;
  }
  return 0;
}
