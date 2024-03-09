#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int first, max;
  cin >> first;
  max = 0;
  for (int i = 1; i < n; i++) {
    int current;
    cin >> current;
    max = max < current ? current : max;
  }
  int out;
  if (max > first)
    out = max - first + 1;
  else if (max == first)
    out = 1;
  else
    out = 0;
  cout << out << endl;
  return 0;
}
