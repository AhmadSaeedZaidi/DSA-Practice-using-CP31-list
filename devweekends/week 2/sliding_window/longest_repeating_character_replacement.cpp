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
    int characterReplacement(string s, int k) {
        int n = s.size(), i=0, j, m=0, sol =0;
        int v[26] = {0};
        char c;
        for (j=0; j < n; j++) {
            v[s[j]-'A']++;
            m = max(m,v[s[j]-'A']);
            if (j + 1 > k + i + m) {
                v[s[i]-'A']--;
                i++;
            }
            sol = max(sol,j-i+1);
        }
        return sol;
    }
};

// ridiculously hard problem.
// the winning idea is that 
// a) the 