#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef unordered_map<int, bool> mi;
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
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        dq q;
        vi sol;
        int i=0;
        // q.push_front({nums[0], 0});
        // for (j = 1; j<k;j++) {
        //     while (!q.empty() && q.back().F < nums[j]) q.pop_back();
        //     q.push_back({nums[j],j});
        // }
        // sol.push_back(q.front().F);
        for (i=0;i < nums.size(); i++) {
            while (!q.empty() && q.front() < i-k) q.pop_front();
            while (!q.empty() && nums[q.back()] < nums[i]) q.pop_back();
            q.push_back(i);

            if (i > k) sol.push_back(nums[q.front()]);
           
        }
        return sol;
    }
};


// O(nlogn) solution.
// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         pq q;
//         vi sol;
//         int i=0,j=0, n = nums.size();
//         for (j = 0; j<k;j++) {
//             q.push({nums[j], j});
//         }
//         sol.push_back(q.top().F);
//         for (j=k;j < n; j++ ) {
//             i++;
//             while (q.top().S < i && !q.empty()) {
//                 q.pop();
//             }
//             q.push({nums[j],j});
//             sol.push_back(q.top().F);
//         }
//         return sol;
//     }
// };