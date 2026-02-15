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
    int n, num, f = 0;
    cin >> n;
    REP(i,0,n) {
        cin >> num;
        if (num == 67) f = 1; 
    }
    cout << (f ? "YES" : "NO") << '\n';
  }
}

// accepted