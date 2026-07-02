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
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size()-1, k = 0;
        while (i < j) {
            if (nums[i] + nums[j] < target) {
                k+=j-i; i++;
            } else {
                j--; 
            }
        }
        return k;
    }
};

// n_i + n_j < target
// assume target == 0
// n_i < - n_j
// if n_j too big, n_i < - n_j
// remember to count ALL pairs