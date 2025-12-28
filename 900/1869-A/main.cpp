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
    int n, x;
    cin >> n;
    REP(i,0,n) {
        cin >> x;
    }
    if (n%2==0) {
        cout << "2\n1 " << n << "\n1 " << n << '\n';
    } else {
        cout << "4\n1 2\n1 2 \n2 " << n << "\n2 " << n <<'\n';
    }
  }
}

// accepted
// not a fun problem. this wasn't 900 level
// you just needed to find the trick that x^x = 0 and then hardcode 1 of 2 solutions.
// rather dissapointing, not a fun solve.