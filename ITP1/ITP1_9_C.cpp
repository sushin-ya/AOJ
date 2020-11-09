#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, taro = 0, hanako = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string a, b;
    cin >> a >> b;

    if (a > b) {
      taro += 3;
    } else if (a < b) {
      hanako += 3;
    } else {
      taro++;
      hanako++;
    }
  }

  cout << taro << " " << hanako << endl;
}