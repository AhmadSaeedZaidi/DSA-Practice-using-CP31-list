#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef unordered_map<int, int> mi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) (a) * (a)

class Solution {
public:
    bool validPal(string &s, int i, int j) {
        while (i < j) {
            if (s[i]!=s[j]) return false;
            i++;j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        bool skip = false;
        while (i < j) {
            if (s[i] != s[j]) {
                return validPal(s,i+1,j) || validPal(s,i,j-1);
            } else {
            i++;j--;
            }
        }
        return true;
    }
};


// ucuucuu
// || operator is SIGNIFICANTLY faster than + operator for bool
// apparently with + the compiler needs to eval left and right
// but with || it knows left and right are bools, and will check left, if left is true, it just passes, never checks right
// and this is significant enough to be faster!?