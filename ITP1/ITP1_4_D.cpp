#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, mini = 10000000, maxi = -10000000;
  int64_t sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;

    mini = min(mini, a);
    maxi = max(maxi, a);
    sum += a;
  }

  cout << mini << " " << maxi << " " << sum << endl;
}