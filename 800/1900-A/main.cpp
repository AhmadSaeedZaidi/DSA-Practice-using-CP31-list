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
    int n, c = 0, res = 0;
    cin >> n;
    string s;
    bool b, x;
    cin >> s;
    x = false;
    REP(i, 0, n) {
      b = (s[i] == '.');
      if (b) {
        c++;
        switch (c) {
          case 1:
            res++;
            break;
          case 3: {
            c = 0;
            x = true;
            break;
          }
        }
      } else {
        if (c == 2) {
          res++;
        }
        c = 0;
      }
    }
    if (c == 2) res++;
    cout << ((x) ? 2 : res) << "\n";
  }
}

// accepted