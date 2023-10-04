#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  auto isPrime = [](int x) -> bool {
    for (int i = 2; i * i <= x; ++i) {
      if (x % i == 0) {
        return false;
      }
    }
    return true;
  };

  bool flag = true;

  for (int i = a; i <= b; ++i) {
    bool flag2 = true;
    for (int j = c; j <= d; ++j) {
      auto b = isPrime(i + j);
      flag &= b;
      flag2 &= !b;
    }
    if (flag2) {
      cout << "Takahashi" << endl;
      return 0;
    }
  }

  if (flag) {
    cout << "Aoki" << endl;
  } else {
    cout << "Takahashi" << endl;
  }

  return 0;
}
