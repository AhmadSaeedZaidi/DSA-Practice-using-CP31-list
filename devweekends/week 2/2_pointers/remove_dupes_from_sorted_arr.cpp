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
    int removeDuplicates(vector<int>& nums) {
        int k = 1, val, n = nums.size();;
        if (n==0) return 0;
        if (n==1) return 1;
        for (int i =1;i<n;i++) {
            if (nums[i] == nums[i-1]) continue;
            nums[k] = nums[i];
            k++;
        }
        
        return k;
    }
};

// high-key cheating
// fixed my goofy solution. it's a fast + slow pointer problem, just need to get the indexing right.