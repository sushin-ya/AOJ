#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  while (cin >> n && n != 0) {
    vector<int> s(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> s.at(i);
      sum += s.at(i);
    }

    double m;
    m = (double)sum / n;

    double sig = 0;
    for (int i = 0; i < n;i++){
      sig += pow(s.at(i) - m, 2);
    }

  cout << fixed << setprecision(8) << sqrt(sig/n) << endl;
  }
}