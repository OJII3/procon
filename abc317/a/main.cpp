#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, h, x;
  cin >> n >> h >> x;
  vector<long long> p(n);
  long long min = 1000;
  long long index = -1;
  for (auto &it : p) {
    cin >> it;
    if (h + it >= x && it < min) {
      min = it;
      index = &it - &p[0];
    }
  }
  cout << index + 1 << endl;
}
