#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int> > N(3000, vector<int>(2));
  int i = 0;
  while (1) {
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 0) {
      break;
    }

    if (x < y) {
      N.at(i).at(0) = x;
      N.at(i).at(1) = y;
    } else {
      N.at(i).at(0) = y;
      N.at(i).at(1) = x;
    }

    i++;
  }

  for (i = 0; i < N.size(); i++) {
    if (N.at(i).at(0) == 0 && N.at(i).at(1) == 0) break;
    cout << N.at(i).at(0) << " " << N.at(i).at(1) << endl;
  }
}