#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  string str;
  cin >> str;

  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    string o;
    cin >> o;

    int a, b;
    cin >> a >> b;

    if (o == "replace") {
      string p;
      cin >> p;
      str.replace(a, b - a + 1, p);
      //   cout << "rep: " << str << endl;
    } else if (o == "reverse") {
      string hs, bs, ts;
      hs = str.substr(0, a);
      bs = str.substr(a, b - a + 1);
      ts = str.substr(b + 1, str.length() - b + 1);

      reverse(bs.begin(), bs.end());
      str = hs + bs + ts;
      //   cout << "rev: " << hs << "/" << bs << "/" << ts << "/" << str <<
      //   endl;
    } else {
      string ss;
      ss = str.substr(a, b - a + 1);
      cout << ss << endl;
    }
  }
}