#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string str;
  while ((cin >> str) && (str != "-")) {
    int m;
    cin >> m;

    vector<int> h(m);
    for (int i = 0; i < m; i++) {
      cin >> h.at(i);
    }

    string copy = str, ans;
    for (int i = 0; i < m; i++) {
      str = str.substr(h.at(i), str.size());
      copy = copy.substr(0, h.at(i));
      str = str + copy;
      copy = str;
    }
    cout << str << endl;
  }
}