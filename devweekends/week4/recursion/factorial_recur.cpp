#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n==0, n==1) return 1;
        return n+fib(n-1)+fib(n-2);
    }
};

// trivial
// first recursion problem you learn
// also you should improve it with dp

class Solution2 {
public:
    unordered_map<int,int> m;
    int fib(int n) {
        if (n==0 || n==1) return n;
        if (m.count(n)) return n + m[n];
        else m[n] = fib(n-1)+fib(n-2);
        return m[n];
    }
};

// but also just... don't use memory?

class Solution2 {
public:
    int fib(int n) {
        int p1=0, p2=1, x=0;
        for (int i = 0; i < n; i++) {
            x = p1 + p2;
            p2 = p1;
            p1 = x;
        }
        return x;
    }
};
