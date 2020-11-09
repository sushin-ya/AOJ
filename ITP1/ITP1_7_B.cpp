#include <iostream>
#include <vector>
using namespace std;

int main() {
  while (1) {
    int n, x;
    cin >> n >> x;

    if (n == 0 && x == 0) {
      break;
    } else {
      int sum = 0;
      for (int i = 1; i < n + 1; i++) {
        for (int j = i + 1; j < n + 1; j++) {
          for (int k = j + 1; k < n + 1; k++) {
            if (i + j + k == x) {
              sum++;
            }
          }
        }
      }
      cout << sum << endl;
    }
  }
}