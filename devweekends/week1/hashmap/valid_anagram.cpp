#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> p;
typedef unordered_map<int, int> mi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) (a) * (a)

class Solution {
public:
    bool isAnagram(string s, string t) {
        mi s1, s2;
        if (s.length() != t.length()) return false;
        for (auto [c1,c2] : std::views::zip(s,t)) {
            s1[c1]++;
            s2[c2]++;
        }
        return (s1==s2);
    }
};


//nothing notable, simple problem