#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, tmp, maxv, minv, ans;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> tmp;

    if (i == 0) {
      minv = tmp;
    }
    if (i == 1) {
      maxv = tmp - minv;
      minv = min(minv, tmp);
    } else {
      maxv = max(maxv, tmp - minv);
      minv = min(minv, tmp);
    }
    // cout << tmp << " " << maxv << " " << minv << endl;
  }

  cout << maxv << endl;
}