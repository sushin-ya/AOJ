#include <iostream>
using namespace std;

int main() {
  string s, p;
  cin >> s >> p;
  s = s + s;

  if(s.find(p) != -1){ //find関数は、一致する文字列がない場合-1を返す
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}