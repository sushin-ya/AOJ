#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> cards(4, vector<int>(13));

  for (int i = 0; i < n; i++) {
    char c;
    int x;
    cin >> c >> x;

    if (c == 'S') {
      cards.at(0).at(x - 1)++;
    } else if (c == 'H') {
      cards.at(1).at(x - 1)++;
    } else if (c == 'C') {
      cards.at(2).at(x - 1)++;
    } else if (c == 'D') {
      cards.at(3).at(x - 1)++;
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 13; j++) {
      if (cards.at(i).at(j) == 0) {
        if (i == 0) {
          cout << "S " << j + 1 << endl;
        } else if (i == 1) {
          cout << "H " << j + 1 << endl;
        } else if (i == 2) {
          cout << "C " << j + 1 << endl;
        } else if (i == 3) {
          cout << "D " << j + 1 << endl;
        }
      }
    }
  }
}