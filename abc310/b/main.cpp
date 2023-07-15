#include <bits/stdc++.h>

using namespace std;

struct Product {
  int p;
  int c;
  vector<int> f = vector<int>(100);
};

int main() {
  int n, m;
  cin >> n >> m;
  vector<Product> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i].p >> vec[i].c;
    for (int j = 0; j < vec[i].c; j++) {
      cin >> vec.at(i).f.at(j);
    }
  }

  sort(vec.begin(), vec.end(),
       [&](Product a, Product b) -> bool { return a.p > b.p; });

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      bool flag = 1;
      if (vec[i].c > vec[j].c)
        break;
      for (int k = 0; k < vec[i].c; k++) {
        flag &= find(vec[j].f.begin(), vec[j].f.end(), vec[i].f[k]) !=
                vec[j].f.end();
      }
      flag &= vec[i].p > vec[j].p || vec[i].c < vec[j].c;
      if (flag) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}
