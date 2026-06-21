#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef unordered_map<int, bool> mi;
typedef unordered_set<int> si;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) (a) * (a)

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size(), i = 0;
        mi m;
        if (k == 0) return false; // CHEATING
        for (int j = 0; j < n; j++) {
            if (m[nums[j]]) return true;
            if (j-i >= k) {m[nums[i]] = false; i++;}
            m[nums[j]] = true;

        }
        return false;
    }
};

// fastest solution, even though there are better options for a solution
// set instead of map to save memory, change order of operations instead of k==0 check, but they made the code slower.