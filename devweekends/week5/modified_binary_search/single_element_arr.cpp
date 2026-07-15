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
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        int m;
        int R, L;
        while (l <= r) {
            m = l + (r-l)/2;
            L = (m == 0) ? numeric_limits<int>::min() : nums[m-1];
            R = (m == nums.size()-1) ? numeric_limits<int>::max() : nums[m+1];
            if (nums[m] != L && nums[m] != R) return nums[m];
            bool a = nums[m] == L, b = m % 2 == 1;
            if (a ^ b) r=m; else l=m;
        }
        return -1;
    }
};

// will do some more partition problems tomorrow :)