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
    int findDuplicate(vector<int>& nums) {
        int tutel=0, hare=1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[tutel] == nums[hare]) {
                return nums[tutel];
            }
            hare = nums[nums[hare]];
            tutel = nums[tutel];
            
        }
    }
};

// tutel and hare algo, saw this in a joma video LOL