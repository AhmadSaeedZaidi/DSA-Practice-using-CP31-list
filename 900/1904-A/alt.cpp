#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<ll, ll> pi;
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
    ll v[6];
    set<pi> r, move;
    int ans = 0;
    REP(i, 0, 6) cin >> v[i];
    ll a = v[0], b = v[1], dx[8] = {a, -a, a, -a, b, -b, b, -b},
       dy[8] = {b, b, -b, -b, a, a, -a, -a};

    REP(i, 0, 8) { move.insert({dx[i], dy[i]}); }
    for (auto m : move) {
      r.insert({v[2] + m.F, v[3] + m.S});
    }
    for (auto m : move) {
      if (r.count({v[4]+m.F,v[5]+m.S})) ans++;
    }
    cout << ans << "\n";
  }
}

// accepted