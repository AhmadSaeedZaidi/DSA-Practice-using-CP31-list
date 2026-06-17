#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, bool>;
typedef unordered_map<int, int> mi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) (a) * (a)

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        mi map;
        for (auto n:nums) {
            if (map[n]) return true;
            else map[n] = true;
        }
        return false;
    }
};

// nothing notable, simple easy problem