#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, h, m;
  cin >> a >> b >> h >> m;
  long double mrad = (m / 12.f) * 2 * M_PI;
  long double hrad = (h / 12.f) * 2 * M_PI + (m / 12.f) * (2 * M_PI / 12.f);
  long double diff =
      abs(hrad - mrad) > M_PI ? abs(hrad - mrad) - M_PI : abs(hrad - mrad);
  long double c = sqrtl(a * a + b * b - 2 * a * b * cos(diff));
  cout << to_string(c) << endl;
  return 0;
}
