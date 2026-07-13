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
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() -1, mid;
        while (nums[left] > nums[right]) {
            mid = left + (right - left)/2;
            if (nums[mid] > nums[right]) left = 1 + mid;
            else right = mid;
        }
        return nums[left];
    }
};

// IMPORTANT:
// right biased vs left biased loops in binary search
// (Prevents infinite loops when left & right are 1 index apart)

// RULE 1: If your logic includes `right = mid`
// -> You MUST round DOWN (Left-Biased)
// -> mid = left + (right - left) / 2;

// RULE 2: If your logic includes `left = mid`
// -> You MUST round UP (Right-Biased)
// -> mid = left + (right - left + 1) / 2;

// RULE 3: If your logic includes BOTH `left = mid + 1` AND `right = mid - 1`
// -> Infinite loops are IMPOSSIBLE. The search window shrinks every single time.
// -> You can technically use either bias, but Left-Biased (rounding down) is the universal convention.
// -> mid = left + (right - left) / 2;
// -> The loop condition for this type is almost always: while (left <= right)

// QUICK MEMORY TRICK: 
// The math bias is always the OPPOSITE of the pointer you set to `mid`.
// Setting `right` to mid? Bias left.
// Setting `left` to mid? Bias right.
