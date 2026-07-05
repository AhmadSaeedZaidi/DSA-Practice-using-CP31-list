#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printNTo1Recur(int n, int i) {
        if (i==0) return;
        cout << i << " ";
        printNTo1Recur(n,i-1);
    }
    int printNTo1(int n) {
        printNTo1Recur(n,n);
    }
};