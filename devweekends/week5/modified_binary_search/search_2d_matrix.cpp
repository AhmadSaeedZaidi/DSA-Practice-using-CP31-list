#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<vector<int>> vi;
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
    int findRow(vi &nums, int &target) {
        int left = 0, right = nums.size()-1, mid;
        if (target < nums[0][0]) return -1;
        while (left < right) {
            mid = left + (right - left + 1) /2;
            if (target < nums[mid][0]) right = mid-1; else left = mid;
        }
        return left;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = findRow(matrix, target);
        if (row < 0) return false;
        int left = 0, right = matrix[row].size() -1, mid;
        while (left <= right) {
            mid = left + (right - left) /2;
            if (target == matrix[row][mid]) return true;
            if (target > matrix[row][mid]) left = mid + 1; else right = mid-1;
        }
        return false;
    }
};
