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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size(), i,j,k,l;
        ll sum;
        sort(nums.begin(), nums.end());
        vector<vi> sol;
        for (i = 0; i < n - 3; i++ ){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            for (j = i+1; j < n - 2; j++) {
                if (j > i+1 && nums[j] == nums[j-1]) continue;
                k = j+1; l = n-1;
                while (k < l) {
                    sum = (ll)nums[i] + nums[j] + nums[k] + nums[l];
                    if ( sum == target) {
                        sol.push_back({nums[i], nums[j], nums[k], nums[l]});
                        while (k < l && nums[l] == nums[l-1]) l--;
                        while (k < l && nums[k] == nums[k+1]) k++;
                        l--;
                        k++;
                    } else if (sum < target) {
                        k++;
                    } else l--;
                }
            }
        }
        return sol;
    }
};

// just 3sum but with slight changes. and a stupid test case that needed upcasting to long long.