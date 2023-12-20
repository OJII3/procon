#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

auto main() -> int {
  int k, g, m;
  cin >> k >> g >> m;

  int glass = 0;
  int mug = 0;


  auto fun = [&]() {
    if (glass == g) {
      glass = 0;
    } else if (mug == 0) {
      mug = m;
    } else {
      int pour = min(g - glass, mug);
      glass += pour;
      mug -= pour;
    }
  };

  for (int i=0; i<k; ++i) {
    fun();
  }

  cout << glass << ' ' << mug << endl;
}
