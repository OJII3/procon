#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, p;
  cin >> n >> k >> p;

  vector ca(n, pair<int, vector<int>>(0, vector<int>(k)));

  for (int i = 0; i < n; ++i) {
    cin >> ca[i].first; // ci
    for (int j = 0; j < k; ++j) {
      cin >> ca[i].second[j]; // cij
    }
  }

  vector canditates(0, vector<int>(k));

  while (true) {
    for (int i = 0; i < k; ++i) {

      vector copied(ca.size(), pair<int, vector<int>>(0, vector<int>(k)));
      copy(ca.begin(), ca.end(), copied.begin());

      sort(copied.begin(), copied.end(),
           [&i](const pair<int, vector<int>> &a,
                const pair<int, vector<int>> &b) {
             return a.second[i] > b.second[i];
           });
    }
  }
}
