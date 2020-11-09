#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  char ch;
  map<char, int> atoz;

  for (char i = 'a'; i <= 'z'; i++) {
    atoz[i] = 0;
  }

  while (cin >> ch) {  // EOFまでの読み込み
    ch = tolower(ch);
    atoz[ch]++;
  }

  for (char i = 'a'; i <= 'z'; i++) {
    cout << i << " : " << atoz[i] << endl;
  }
}