#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  vector<int> y(n);
  for (int i = 0; i < n; i++) {
    cin >> x.at(i);
  }
  for (int i = 0; i < n; i++) {
    cin >> y.at(i);
  }

  // p = 1
  double dxy = 0;
  for (int i = 0; i < n; i++) {
    dxy += abs(x.at(i) - y.at(i));
  }
  cout << fixed << setprecision(8) << dxy << endl;

  // p = 2
  dxy = 0;
  for (int i = 0; i < n; i++) {
    dxy += pow(abs(x.at(i) - y.at(i)), 2);
  }
  cout << fixed << setprecision(8) << sqrt(dxy) << endl;

  // p = 3
  dxy = 0;
  for (int i = 0; i < n; i++) {
    dxy += pow(abs(x.at(i) - y.at(i)), 3);
  }
  cout << fixed << setprecision(8) << pow(dxy, (1.0 / 3)) << endl;

  // p = inf
  dxy = 0;
  for (int i; i < n; i++) {
    dxy = max(dxy, (double)abs(x.at(i) - y.at(i)));
  }
  cout << fixed << setprecision(8) << dxy << endl;
}