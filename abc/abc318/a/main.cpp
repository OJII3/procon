#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, p;
  cin >> n >> m >> p;
  auto out = (n - m) / p + 1;
  if (m > n)
    out = 0;
  cout << out << endl;
}
