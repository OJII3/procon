#include <bits/stdc++.h>

using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;
  string s;
  cin >> s;

  int count = 0;

  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == 'T') {
      for (int j = i + 1; j < s.size(); ++j) {
        if (s[j] == 'U') {
          for (int k = j + 1; k < s.size(); ++k) {
            if (s[k] == 'A') {
              for (int l = k + 1; l < s.size(); ++l) {
                if (s[l] == 'T') {
                  ++count;
                }
              }
            }
          }
        }
      }
    }
  }

  cout << count << endl;
  return 0;
}
