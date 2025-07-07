#include <bits/stdc++.h>

using namespace std;

int main() {
  int m;
  cin >> m;
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;

  int min = 300;

  for (auto i = 0; i < 10; ++i) {
    bool flag1, flag2, flag3 = false;
    int count = 0;
    for (auto j = count; j < m; ++j) {
      if (s1[j % m] - '0' == i) {
        flag1 = true;
        break;
      }
    }
    for (auto j = count + 1; j < m + count + 1; ++j) {
      if (s2[j % m] - '0' == i) {
        flag2 = true;
        count = j;
        break;
      }
    }
    for (auto j = count + 1; j < m + count + 1; ++j) {
      if (s3[j % m] - '0' == i) {
        flag3 = true;
        count = j;
        break;
      }
    }

    if (flag1 && flag2 && flag3) {
      min = count > min ? min : count;
    } else {
      min = 0;
      break;
    }
  }

  min = min == 300 || min == 0 ? -1 : min;

  cout << min << endl;
}
