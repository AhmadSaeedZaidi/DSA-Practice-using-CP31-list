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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) return findMedianSortedArrays(nums2,nums1);
        int n = nums1.size(), m = nums2.size();
        int ll = 0, rr = n;
        int half = (n + m +1)/2;
        int l1, r1, l2, r2, m1, m2;
        while (ll <= rr) {
            m1 = ll + (rr - ll) /2;
            m2 = half-m1;
            l1 = (m1 == 0) ? numeric_limits<int>::min() : nums1[m1-1];
            l2 = (m2 == 0) ? numeric_limits<int>::min() : nums2[m2-1];
            r1 = (m1 == n) ? numeric_limits<int>::max() : nums1[m1];
            r2 = (m2 == m) ? numeric_limits<int>::max() : nums2[m2];
            if (l1 <= r2 && l2 <= r1) {
                if ((n + m) % 2 == 0) {
                    return (max(l1, l2) + min(r1, r2)) / 2.0;
                } else {
                    return max(l1, l2);
                }
            }
            if (r2 < l1) rr = m1-1; else ll = m1+1;
        }
        return -1;
    }
};

// new concept!
// binary search on partition.
// i... i don't know how to explain this honestly.

