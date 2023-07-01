#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

int compar(const void *a, const void *b) {
  auto va = *(vector<int> *)a;
  auto vb = *(vector<int> *)b;
  int i = (vb.at(2) - va.at(2));
  return i;
}

int main() {
  int n;
  cin >> n;
  vector<vector<int>> vec(n, vector<int>(3));

  for (int i = 0; i < n; ++i) {
    int ai;
    cin >> ai;
    vec[i][0] = i + 1;
    if (vec[ai - 1][1] == 0)
      vec[ai - 1][1] = i + 1;
    else if (vec[ai - 1][2] == 0)
      vec[ai - 1][2] = i + 1;
  }

  for (int i = 0; i < n - 1; ++i)
    cout << vec[i][1] << ' ';
  cout << vec[n - 1][1] << endl;
  for (int i = 0; i < n - 1; ++i)
    cout << vec[i][2] << ' ';
  cout << vec[n - 1][2] << endl;

  qsort(vec.data(), vec.size(), sizeof(vector<int>(3)), compar);

  for (int i = 0; i < n - 1; ++i)
    cout << vec[i][0] << ' ';
  cout << vec[n - 1][0] << endl;

  return 0;
}
