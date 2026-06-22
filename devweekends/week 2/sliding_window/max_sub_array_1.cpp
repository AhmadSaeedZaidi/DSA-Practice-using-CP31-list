#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef unordered_map<char, int> mi;
typedef unordered_set<int> si;
typedef priority_queue<int_least32_t> pq;
typedef deque<int> dq;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) (a) * (a)


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double m = numeric_limits<int>::min(), avg=0, d = k;
        int l =0, r, n = nums.size();
        for (r = 0; r < k; r++) {
            avg+=nums[r]/d;
        }
        m = max(m,avg);
        for (r=k; r<n;r++) {
            avg+=nums[r]/d;
            avg-=nums[l]/d;
            l++;
            m = max(m,avg);
        }
        return m;
    }
};

// pay close attention to variables -_-, don't accidentally cast to int and lose precision;
