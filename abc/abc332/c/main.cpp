#include <bits/stdc++.h>

using namespace std;

auto main() -> int {
  int n = 0, m = 0;
  cin >> n >> m;


  string s;
  cin >> s;

  struct Data {
  int logo_all = 0;
  int logo_clean = 0;
  int no_logo_clean = 0;
  };

  int mini = 1e9;
  Data data;
  data.no_logo_clean = m;
  auto func = [&](int today_i, auto func) {
    /* if (today_i == n) { */
    /*   mini = min(mini, data.logo_all); */
    /*   cout << mini << endl; */
    /*   return; */
    /* } */

    char today = s[today_i];
    if (today == '2') {
      if (data.logo_clean > 0) {
          data.logo_clean--;
      } else {
          data.logo_all++;
      }
      /* func(today_i + 1, func, data); */
    } else if (today == '0') {
      data.logo_clean = data.logo_all;
      data.no_logo_clean = m;
      /* func(today_i + 1, func, data); */
    } else {
      /* if (data.no_logo_clean == 0 && data.logo_clean == 0) { */
      /*   data.logo_all++; */
      /*   /1* func(today_i + 1, func, data); *1/ */
      /* } */
      /* if (data.no_logo_clean > 0) { */
      /*   data.no_logo_clean--; */
      /*   /1* func(today_i + 1, func, data); *1/ */
      /* } */
      /* if (data.logo_clean > 0) { */
      /*   data.logo_clean--; */
      /*   /1* func(today_i + 1, func, data); *1/ */
      /* } */ 
      if (data.no_logo_clean > 0) {
        data.no_logo_clean--;
      } else if (data.logo_clean > 0) {
        data.logo_clean--;
      } else {
        data.logo_all++;
      }
    }
  };

  for (int i=0; i<n; ++i) {
    func(i, func);
  }

  cout << data.logo_all << endl;
};
