#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  string ans;
  cin >> ans;
  transform(ans.begin(), ans.end(), ans.begin(), ::tolower);

  int count = 0;
  string str;
  while ((cin >> str) && (str != "END_OF_TEXT")) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    if (ans == str) {
      count++;
    }
  }
  cout << count << endl;
}