#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef unordered_map<int, int> mi;
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
    int n, m = 1, x = 1, c, p;
    cin >> n;
    vi a(n);
    REP(i,0,n){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    p = a[0];
    REP(i, 1, n) {
        c = a[i];
        if (c == p+1 || c == p) x+=(c-p); else x=1;
        m = (x > m) ? x : m;
        p = c;
    }
    cout << m << '\n';
  }
}

// fun problem, haven't done MEX problems before. a more efficient solution likely exists.