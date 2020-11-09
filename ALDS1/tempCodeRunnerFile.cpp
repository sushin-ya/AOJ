#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
  int ans;
  for (int i = 1; i < x + 1; i++) {
    if (x % i == 0 && y % i == 0) {
      ans = i;
    }
  }
  return ans;
}

int main() {
  int x, y, maxi;
  cin >> x >> y;

  if (x >= y) {
    maxi = gcd(y, x % y);
  } else {
    maxi = gcd(x, y % x);
  }

  cout << maxi << endl;
}