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
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vi pref(n+2,1), suff(n+2,1), sol;

        for (int i = 1; i <= n; i++) {
            pref[i] = nums[i-1]*pref[i-1];
            suff[n-i+1] = nums[n-i]*suff[n-i+2];
        }
        for (int i = 1; i <= n; i++) {
            sol.push_back(pref[i-1]*suff[i+1]);
        }
        return sol;
    }
};


// this is really hard without division. 

// n1,n2,n3....nm
// n1, n2*n1, n3*n2*1.... prod
// prod/n1, prod/n2, prod/n3.... prod/nm

// stupid constraint, but still did it lol
