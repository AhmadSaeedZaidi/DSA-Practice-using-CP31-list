#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void print1ToN(int n) {
        if (n == 0) return;
        print1ToN(n-1);
        cout << n << " ";
    }
};