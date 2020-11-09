#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  double c_rad = M_PI * c / 180;

  cout << fixed << setprecision(8) << sin(c_rad) * a * b / 2 << endl;
  cout << fixed << setprecision(8)
       << a + b + sqrt(a * a + b * b - 2 * a * b * cos(c_rad)) << endl;
  cout << fixed << setprecision(8) << b * sin(c_rad) << endl;
}