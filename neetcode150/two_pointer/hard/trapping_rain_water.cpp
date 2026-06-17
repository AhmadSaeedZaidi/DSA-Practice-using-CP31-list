// two pointer, why was this a hard problem?

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
    int trap(vector<int>& height) {
        int r = height.size() - 1, l = 0, ml = l, mr = r, ans = 0;
        r--;
        l++;
        while (l <= r) {
            if (height[mr] < height[ml]) {
                ans += max(0,min(height[mr], height[ml]) - height[r]);
                mr = (height[r] >= height[mr]) ? r : mr;
                r--;
            } else {
                ans += max(0,min(height[mr], height[ml]) - height[l]);
                ml = (height[l] >= height[ml]) ? l : ml;
                l++;
            }
        }
        return ans;

    }
};
