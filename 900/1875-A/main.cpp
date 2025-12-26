#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<int, int> pi;
typedef unordered_map<int,int> mi;
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
    ll a,b,n;
    cin >> a >> b >>n;
    vi t(n);
    REP(i,0,n){
        cin >> t[i];
    }
    ll x = 0, c = b, f = 0;
    while (f < n){
        c+=min(a,t[f]);
        c-=(t[f] >= a);
        f++;
    }
    cout << c << '\n';

  }
}

// accepted

// learning: don't sort. simplify condition statements. time limit constraints are real.