#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<int, int> pi;
typedef unordered_map<int, int> mi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) (a) * (a)

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vi v(n+1), a(n+1);
    REP(i,1,n+1) {
        cin >> v[i];
    }
    ll sum1 = 0, sumn=0;
    REP(i,2,n) {
        a[i] = (v[i+1] + v[i-1] - 2*v[i])/2;
        sum1 += a[i]*(n-i);
        sumn += a[i]*(i-1);
    }

    a[1] = (v[n] - sum1)/(n-1);
    a[n] = (v[1] - sumn)/(n-1);
    REP(i,1,n+1) {
        cout << a[i] << ' ';
    }
    cout << '\n';
  }
}

// accepted after contest. for learning