#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main() {
#define int long long
  int h;
  cin >> h;
  cout << fixed << setprecision(5);

  float ans = sqrt(h * (12800000 + h));

  cout << ans << endl;

  return 0;
}
