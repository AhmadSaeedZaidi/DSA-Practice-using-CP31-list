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
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    unordered_map<char, int> mp;
    REP(i, 0, n) { mp[s[i]] = (mp.count(s[i]) ? mp[s[i]] + 1 : 1); }
    bool odd = (n - k) % 2;
    int odds = 0, evens = 0;
    for (auto m : mp) {
      if (m.S % 2 == 0)
        evens++;
      else
        odds++;
    }
    bool c0 = odds - k == 1 && odd, c1 = k == odds && !odd, c2 = k > odds;
    cout << (c0 || c1 || c2 ? "yes\n" : "no\n");
  }
}

// accepted