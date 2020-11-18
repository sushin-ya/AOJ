#include <bits/stdc++.h>
using namespace std;

bool binary_search(vector<int> S, int key) {
  int left = 0, right = (int)S.size() - 1;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (S.at(mid) == key)
      return true;
    else if (S.at(mid) > key)
      right = mid - 1;
    else if (S.at(mid) < key)
      left = mid + 1;
  }
  return false;
}

int main() {
  int n;
  cin >> n;
  vector<int> S(n);
  for (int i = 0; i < n; i++) {
    cin >> S.at(i);
  }

  int q;
  cin >> q;
  vector<int> T(q);
  for (int i = 0; i < q; i++) {
    cin >> T.at(i);
  }

  int res = 0;
  for (int i = 0; i < q; i++) {
    if (binary_search(S, T.at(i))) {
      res++;
    }
  }

  cout << res << endl;
}