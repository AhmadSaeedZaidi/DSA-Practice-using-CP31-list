#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printNTo1(int n) {
        if (n==0) return;
        cout << n << " ";
        printNTo1(n-1);
    }
};