// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, l;
  cin >> n >> m >> l;
  vector<vector<int> > a(n, vector<int>(m)), b(m, vector<int>(l));
  vector<vector<int64_t> > c(n, vector<int64_t>(l));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a.at(i).at(j);
    }
  }


  for (int i = 0; i < m; i++) {
    for (int j = 0; j < l; j++) {
      cin >> b.at(i).at(j);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      for (int k = 0; k < l; k++) {
        c.at(i).at(k) += a.at(i).at(j) * b.at(j).at(k);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      cout << c.at(i).at(j);
      if(j < l-1){
        cout << " ";
      }
    }
    cout << endl;
  }
}