#include <bits/stdc++.h>

using namespace std;

struct Point {
  bool coverd = false;
};

int main() {
  int n;
  cin >> n;
  vector cord(101, vector<Point>(101));
  for (int i = 0; i < n; ++i) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int x = a + 1; x <= b; ++x) {
      for (int y = c + 1; y <= d; ++y) {
        cord[x][y].coverd = true;
      }
    }
  }

  int count = 0;
  for (int x = 0; x < cord.size(); ++x) {
    for (int y = 0; y < cord.size(); ++y) {
      if (cord[x][y].coverd) {
        ++count;
      }
    }
  }

  cout << count << endl;
}
