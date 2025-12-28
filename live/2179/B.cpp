#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) (a) * (a)

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, sum = 0, curr = 0, min_sum = INT_MAX;
    cin >> n;
    int a[n];
    REP(i, 0, n) {
      cin >> a[i];
      if (i > 0) sum += abs(a[i] - a[i - 1]);
    }
    REP(i, 0, n) {
      if (i == 0) {
        curr = sum - abs(a[0] - a[1]);
      } else if (i == n - 1) {
        curr = sum - abs(a[n - 1] - a[n - 2]);
      } else {
        curr = sum - abs(a[i] - a[i + 1]) - abs(a[i] - a[i - 1]) + abs(a[i - 1] - a[i + 1]);
      }
      min_sum = min(min_sum, curr);
    }
    cout << min_sum << "\n";
  }
}

// accepted