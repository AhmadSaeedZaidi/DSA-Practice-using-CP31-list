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
        int l1 = 0, l2 = 0, r1 = nums1.size() -1, r2 = nums2.size() -1, mid1, mid2;
        
        if (nums1[l1] > nums2[r2]) return
    }
};

// 1, 2, 3, 4, 5, 6, 7, 8;
// case 1:
//             5, 6, 7
// case 2:
//                        ,9, 10, 11
// case 3:        