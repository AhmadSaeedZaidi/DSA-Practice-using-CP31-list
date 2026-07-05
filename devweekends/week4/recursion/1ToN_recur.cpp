#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void print1ToNRecur(int n, int i) {
        if (i>n) return;
        cout << i << " ";
        print1ToNRecur(n,i+1);
    }
    int print1ToN(int n) {
        print1ToNRecur(n,1);
    }
};