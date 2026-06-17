#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<pi> vi;
typedef unordered_map<int, int> mi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) (a) * (a)

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vi v; mi m;
        for (auto n:nums) {
            m[n]++;
        }
        for (auto p:m) {
            v.push_back({p.S,p.F});
            sort(v.begin(), v.end());
            if (v.size() > k) v.erase(v.begin()); //v.pop_back();
        }
        vector<int> sol;
        for (auto a:v) {
            sol.push_back(a.S);
        }
        return sol;
    }
};
