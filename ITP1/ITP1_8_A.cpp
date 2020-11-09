#include <iostream>
using namespace std;

int main() {
  string str;
  getline(cin, str);

  for (int i = 0; i < str.size(); i++) {
    isupper(str[i]) ? str[i] = tolower(str[i]) : str[i] = toupper(str[i]);
  }
  cout << str << endl;
}