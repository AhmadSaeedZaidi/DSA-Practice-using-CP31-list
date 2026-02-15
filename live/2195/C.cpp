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
#define INF 1e9

bool sp(vi v, int i) {
    if (abs(v[i] - v[i+1]) == v[i-1]) {
        return true;
    }
    return false;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, ans;
    cin >> n;
    vi v(n);
    REP(i,0,n) {
        cin >> v[i];
    }
    vector<vector<int>> dp(n, vector<int>(7));
    REP(i, 1, 7) {
        dp[0][i] = 1;
        if (i == v[0]) dp[0][i] = 0;
    }
    REP(j, 1, n) {
        REP(i, 1, 7) {
            int curr = 1;
            if (i == v[j]) curr = 0;
            int min = INF;
            REP(k, 1, 7) {
                if (i != k && i + k != 7) {
                        if (dp[j-1][k] < min) min = dp[j-1][k];
                }
            }
            dp[j][i] = curr + min;
        }
    }
    ans = INF;
    REP(i, 1, 7) {
        if (dp[n-1][i] < ans) ans = dp[n-1][i];
    }
    cout << ans << '\n';
  }
}

// accepted