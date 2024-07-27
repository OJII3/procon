#include <bits/stdc++.h>
#include <regex>

using namespace std;

int main() {
  string str;
  cin >> str;
  str = regex_replace(str, regex("9"), "8");
  str = regex_replace(str, regex("1"), "9");
  str = regex_replace(str, regex("8"), "1");

  cout << str << endl;

  return 0;
}
