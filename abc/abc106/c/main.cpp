#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int k;
  cin >> s >> k;
  long index = 0;
  int num;
  while (index < k) {
    num = s[index];
    index += pow(num, 5e15);
  }
  cout << num << endl;
  return 0;
}
