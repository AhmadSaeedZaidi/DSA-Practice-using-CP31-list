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
    vector<int> twoSum(vector<int>& nums, int target) {
        mi m;
        int i = 1;
        for (auto n:nums) {
            if (m[target-n]) return {m[target-n]-1,i-1};
            m[n] = i;
            i++;
        }
        return {-1,-1};
    }
};

// was going for a complicated sorting solution. but in reality, a hashmap solves this easily.