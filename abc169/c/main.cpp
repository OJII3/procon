#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a;
  float b;
  cin >> a >> b;
  auto c = (long long)(b*100);
  cout << (long long)(a*c/(long long)100)  << endl;
  return 0;
}
