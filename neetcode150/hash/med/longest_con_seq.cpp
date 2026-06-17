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
    int longestConsecutive(vector<int>& nums) {
        mi m;
        sort(nums.begin(), nums.end());
        int k = 0;
        for (auto n:nums) {
            m[n] = (m[n-1]) ? m[n-1]+1:1;
            k = max(m[n],k);
        }
        return k;
    }
};


// fun problem