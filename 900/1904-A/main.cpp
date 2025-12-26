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
    ll v[6];
    REP(i, 0, 6) cin >> v[i];

    ll dx = v[3] - v[5];
    ll dy = v[2] - v[4];
    ll a = v[0], b = v[1];
    ll dist = abs(dx) + abs(dy), jump = a + b;

    bool sd = abs(dx * b) == abs(dy * a) || abs(dx * a) == abs(dy * b), c0 = dist == jump * 2,
         c1 = (abs(dx) == a && abs(dy) == b) || (abs(dx) == b && abs(dy) == a),
         s1 = (dx == 0 || dy == 0) && (2 * a == dist || 2 * b == dist),
         s2 = (abs(dx) == abs(a - b) || abs(dy) == abs(a - b)) && (dist == 2 * a || dist == 2 * b),
         s3 = (abs(dx) == abs(dy) && abs(b - a) == abs(dx));
    if (c0 && sd) {
      cout << 1 << '\n';
    } else if (c0 || c1 || s1 || s2 || s3) {
      cout << 2 << '\n';
    } else
      cout << 0 << '\n';
  }
}

// accepted