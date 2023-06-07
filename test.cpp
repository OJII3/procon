#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i][0];
    cin >> v[i][1];
  }
}
