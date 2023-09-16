#include <bits/stdc++.h>

using namespace std;

int main() {
  long long a, b;
  cin >> a >> b;
  cout << fixed << setprecision(0);
  cout << powl(a, b) + powl(b, a) << endl;
}
