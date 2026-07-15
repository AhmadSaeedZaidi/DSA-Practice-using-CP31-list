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
    bool search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1, mid;
        while (left <= right) {
            mid = left + (right - left)/2;
            if (nums[mid] == target) return true;
            bool a = target < nums[left];
            bool b = nums[mid] < nums[left];
            bool c = target > nums[mid];
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left++;
                right--;
                continue;
            }
            left = (a^b^c) ? mid + 1 : left;
            right = (!(a^b^c)) ? right - 1: right;
        }
        return false;
    }
};