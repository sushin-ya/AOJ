#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 3;
  
  for (int tmp = 0; tmp < (1 << N); tmp++) {
    bitset<20> s(tmp);  // 最大20個なので20ビットのビット列として扱う
 
    for (int i = 0; i < N; i++) {
      if (s.test(i)) {
        cout << i << " ";
      }
    }
    cout << endl;
  }
}