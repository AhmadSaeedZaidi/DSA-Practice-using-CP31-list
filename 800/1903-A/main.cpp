#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x1 = INT_MIN, x2;
        bool sorted = true;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> x2;
            sorted = (x2>=x1) && sorted;
            x1 = x2;
        }

        if (k > 1 || sorted) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }
}