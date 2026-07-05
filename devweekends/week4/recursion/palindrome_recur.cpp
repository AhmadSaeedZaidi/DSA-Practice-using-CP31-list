#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool pal(int l, int r, string &s) {
        if (l >= r) return true;
        if (!isalnum(s[l])) return pal(l+1,r,s);
        if (!isalnum(s[r])) return pal(l,r-1,s);
        if (tolower(s[l]) != tolower(s[r])) return false;
        return pal(l+1,r-1,s);
    }
    bool isPalindrome(string s) {
        return pal(0, s.size()-1,s);
    }
};

// trivial
// just two pointer with recursion (shit approach, uses more memory and overhead)
// but n/2 comparisions at least.