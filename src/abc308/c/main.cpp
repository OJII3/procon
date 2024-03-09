#include <bits/stdc++.h>

using namespace std;

int compar(const void *a, const void *b) {
  const pair<int, long double> *x = (pair<int, long double> *)a;
  const pair<int, long double> *y = (pair<int, long double> *)b;

  if ((*x).second == (*y).second) {
    return (*x).first > (*y).first ? 1 : -1;
  } else {
    return (*x).second < (*y).second ? 1 : -1;
  }
}

int main() {
  int n;
  cin >> n;
  pair<int, long double> p[n];

  for (int i = 0; i < n; ++i) {
    long double ai, bi;
    cin >> ai >> bi;
    long double pi = ai / (ai + bi);
    p[i] = {i + 1, pi};
  }

  qsort(p, n, sizeof(pair<int, long double>), compar);

  for (int i = 0; i < n; ++i) {
    cout << p[i].first << (i == n - 1 ? "" : " ");
  }
  cout << endl;

  return 0;
}
