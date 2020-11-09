#include <bits/stdc++.h>
using namespace std;

//ユークリッド互除法
int gcd(int x, int y) {
  int r;
  while ((r = x % y) != 0) {
    x = y;
    y = r;
    // cout << x << " " << y << " " << r << endl;
  }
  return y;
}

int main() {
  int x, y, maxi;
  cin >> x >> y;

  if (x >= y) {
    maxi = gcd(x, y);
  } else {
    maxi = gcd(y, x);
  }

  cout << maxi << endl;
}