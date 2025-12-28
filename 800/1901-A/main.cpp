#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a1 = 0, a2, n, x, i, fuel = 0;
    cin >> n >> x;
    for (i = 0; i < n; i++) {
      cin >> a2;
      fuel = max(a2 - a1, fuel);
      a1 = a2;
    }
    fuel = max(2 * (x - a2), fuel);
    cout << fuel << "\n";
  }
}

// accepted