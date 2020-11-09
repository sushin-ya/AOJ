#include <bits/stdc++.h>
using namespace std;

// https://qiita.com/asksaito/items/76b71602dd956b79dbf7
bool IsPrime(int num) {
  if (num < 2)
    return false;
  else if (num == 2)
    return true;
  else if (num % 2 == 0)
    return false;

  double sqrtNum = sqrt(num);  //合成数xはp<=∫xを満たす素因数pをもつ
  for (int i = 3; i <= sqrtNum; i += 2) {
    if (num % i == 0) {
      return false;  //素数ではない
    }
  }
  return true;  //素数である
}

int main() {
  int n, ans = 0;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
    if (IsPrime(a.at(i))) {
      ans++;
    }
  }

  cout << ans << endl;
}