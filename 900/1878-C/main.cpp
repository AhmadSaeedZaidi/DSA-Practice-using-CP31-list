#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
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
    ll n,k,x;
    cin >> n >> k >> x;
    ll sum = n*(n+1)/2, min = k*(k+1)/2, max = sum-(n-k)*(n-k+1)/2;
    cout << (x < min || x > max ? "NO\n" : "YES\n");
  }
}

// accepted