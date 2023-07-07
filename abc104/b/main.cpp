#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  bool flag = true;

  flag &= s[0] == 'A';
  flag &= s[1] >= 'a' || s[1] <= 'z';
  flag &= s[s.length() - 1] >= 'a' && s[s.length() - 1] <= 'z';

  int count = 0;
  for (int i = 2; i < s.length() - 1; ++i) {
    if (s[i] == 'C') {
      count++;
    } else {
      flag &= s[i] >= 'a' && s[i] <= 'z';
    }
  }

  flag &= count == 1;

  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
