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
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size(), i, j,k;
        sort(nums.begin(), nums.end());
        vector<vi> sol;
        for (i = 0; i < n - 2; i++) {
            if (nums[i] > 0) return sol;
            if (i > 0 && nums[i] == nums[i-1]) continue;
            j = i+1; k = n-1;
            while (j < k) {
                if (-nums[i] == nums[j] + nums[k]) {
                    sol.push_back({nums[i], nums[j], nums[k]});
                    while (j < k && nums[k] == nums[k-1]) k--;
                    while (j < k && nums[j] == nums[j+1]) j++;
                    k--;
                    j++;
                } else if (- nums[i] > nums[j] + nums[k]) {
                    j++;
                } else k--;
            }
        }
        return sol;
    }
};



// nvm lol, it can't be done in nlogn



// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(), nums.end());
//         vector<vi> sol;
//         int i = 0, j, k=n-1, p1, p2;
//         if (nums[i] > 0 || nums[k] <0) return {{}};
//         while (i < k) {
//             p1 = i, p2=k;
//             while (p1 <= p2) { 
//                 j = p1 + (p2-p1)/2;
//                 if (nums[i] + nums[k] == -nums[j]) {
//                     sol.push_back({nums[i], nums[j], nums[k]});
//                     nums.erase(nums.begin() + j);
//                     i++;k-=2;
//                     p1 = p2 -1;
//                 } else if (nums[i] + nums[k] > -nums[j]) {
//                     p2 = j - 1;
//                 } else p1 = j + 1;
//             }
//             if (p1<p2) {
//                 if (nums[i] + nums[k] > 0) k--; else i++;
//             }
//         } 
//         return sol;
//     }
// };

// -2, -1, 0, 1, 1, 2
// -2, -1, 0, 2, 3, 4
// real problem is find k such that nums[i] + nums[j] == -nums[k]
// where i and j are pointers that move inwards, and k is found using binary search!