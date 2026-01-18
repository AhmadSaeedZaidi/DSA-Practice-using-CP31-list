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
    int n, m, h;
    cin >> n;
    cin >> m;
    cin >> h;
    vi a(n);
    REP(i, 0, n) {
        cin >> a[i];
    }
    mi his;
    int b, c;
    REP(i, 0, m) {
        cin >> b;
        b--;
        if (!his.count(b)) his[b] = a[b];
        cin >> c;
        a[b] += c;
        if (a[b] > h) {
            for (auto i : his) {
                a[i.F] = i.S;
            }
            his.clear();
        }
    }
    REP(i, 0, n) {
        cout << a[i] << ' ';
    }
    cout << '\n';
  }
}

// funny problem, had to optmize the vector copy.
// so learning: don't copy vectors, store changes and perform them yourself. in some test cases this is the difference between a pass and a fail.