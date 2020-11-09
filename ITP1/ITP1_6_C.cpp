#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<vector<int> > > p(4, vector<vector<int> >(3, vector<int>(10)));

  for (int i = 0; i < n; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    p.at(a - 1).at(b - 1).at(c - 1) += d;
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 10; k++) {
        cout << " " << p.at(i).at(j).at(k);
      }
      cout << endl;
    }
    if (i < 3) {
      cout << "####################" << endl;
    }
  }
}