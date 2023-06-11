#include <bits/stdc++.h>

using namespace std;

int a2int(char &a) {
  if (a == 'A')
    return 0;
  if (a == 'B')
    return 1;
  if (a == 'C')
    return 2;
  if (a == 'D')
    return 3;
  if (a == 'E')
    return 4;
  if (a == 'F')
    return 5;
  else
    return 6;
}

int main() {
  char p, q;
  cin >> p >> q;
  vector<int> distances = {3, 1, 4, 1, 5, 9};
  int s = a2int(p < q ? p : q);
  int e = a2int(p < q ? q : p);
  int total = 0;
  for (int i = s; i < e; ++i) {
    total += distances[i];
  }
  cout << total << endl;
  return 0;
}
