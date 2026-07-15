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
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() -1, mid, curr;
        while (left <= right) {
            mid = left + (right - left)/2;
            if (nums[mid] == target) return mid;
            bool a = nums[mid] < nums[0], b = target > nums[mid], c = target < nums[0];
            left = (a^b^c) ? mid + 1:left;
            right = (!(a^b^c)) ? mid -1 : right;
        }
        return -1;
    }
};


// if else form below to explain my solution for future me:

/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, mid;
        
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] == target) return mid;
            
            // Boolean definitions for the explanation
            // a: Is mid on the Right/Small segment?
            // c: Is target on the Right/Small segment?
            // b: Is target mathematically greater than mid?

            // CASE 1: Mid and Target are on the SAME segment (a == c)
            if ((nums[mid] < nums[0]) == (target < nums[0])) {
                // The array is perfectly sorted between mid and target.
                // Standard binary search applies!
                if (target > nums[mid]) {
                    left = mid + 1;  // (This is 'b')
                } else {
                    right = mid - 1;
                }
            } 
            // CASE 2: Mid and Target are on DIFFERENT segments (a != c)
            else {
                // If mid is on the Left/Big side, and target is on the Right/Small side...
                // The target MUST be further to the right. 
                if (nums[mid] >= nums[0]) {
                    left = mid + 1;
                } 
                // If mid is on the Right/Small side, and target is on the Left/Big side...
                // The target MUST be further to the left.
                else {
                    right = mid - 1;
                }
            }
        }
        return -1;
    }
};
*/