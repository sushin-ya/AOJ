#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a, b, c, ans=0;
  cin >> a >> b >> c;

  for (int i = a; i < b + 1; i++) {
    if (c % i == 0) {
      ans++;
    }
  }
  cout << ans << endl;
}