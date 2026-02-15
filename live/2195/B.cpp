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
    ll n, f = 1;
    cin >> n;
    vector<bool> vst(n+1, false);
    vi v(n+1);
    REP(i, 1,n+1) {
        cin >> v[i];
    }
    REP(i,1,n+1) {
        if (!vst[i]) {
            vi curI, curV;
            ll tmp = i;
            while (tmp <= n) {
                vst[tmp] = true;
                curI.push_back((int)tmp);
                curV.push_back(v[tmp]);
                tmp *=2;
            }

            sort(curI.begin(), curI.end());
            sort(curV.begin(), curV.end());

            if (curI != curV) {
                i = n;
                f=0;
            }
        }
    }
    cout << (f ? "YES" : "NO") << '\n';
  }
}

// accepted