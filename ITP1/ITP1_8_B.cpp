#include <iostream>
#include <vector>
using namespace std;

int main() {
  while (1) {
    string str;
    int sum = 0;
    cin >> str;

    if (str.size() == 1 && str.at(0) == '0') {
      break;
    } else {
      for (int i = 0; i < str.size(); i++) {
        sum += (int)(str.at(i)) - 48; //ASCIIコード表をもとに変換
      }
      cout << sum << endl;
    }
  }
}