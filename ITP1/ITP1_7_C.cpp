#include <iostream>
#include <vector>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  vector<vector<int> > rc(r + 1, vector<int>(c + 1));

  for (int i = 0; i < r; i++) {
    int csum = 0;
    for (int j = 0; j < c; j++) {
      cin >> rc.at(i).at(j);
      csum += rc.at(i).at(j);
    }
    rc.at(i).at(c) = csum;
  }

  int allsum = 0;
  for (int i = 0; i < c; i++) {
    int rsum = 0;
    for (int j = 0; j < r; j++) {
      rsum += rc.at(j).at(i);
    }
    rc.at(r).at(i) = rsum;
    allsum += rsum;
  }
  rc.at(r).at(c) = allsum;

  for (int i = 0; i < r + 1; i++) {
    for (int j = 0; j < c + 1; j++) {
      cout << rc.at(i).at(j);
      if (j < c) {
        cout << " ";
      }
    }
    cout << endl;
  }
}