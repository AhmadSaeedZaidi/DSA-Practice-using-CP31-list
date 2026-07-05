#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sum(int n) {
        return (n==0) ? 0 : n + sum(n-1);
    }
};

// or just. return n(n+1)*0.5 for O(1)...