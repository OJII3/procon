#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  cout << fixed << setprecision(0);

  cin >> n;
  auto len = to_string(n).length() + 4;
  auto max_cube = pow(10, ceil(len / 3) + 1);

  for (long long i = max_cube; i > 0; --i) {
    auto cube = pow(i, 3);

    string cube_str = to_string((int)cube);
    string cube_cp = string(cube_str);
    reverse(cube_cp.begin(), cube_cp.end());

    if (cube < n && cube_str == cube_cp) {
      cout << cube << endl;
      return 0;
    }
  }
}
