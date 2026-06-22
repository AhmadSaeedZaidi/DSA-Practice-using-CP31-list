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
    // bool cmp(int *m1, int *m2) {
    //     for (int i = 0; i < 26; i++) {
    //         if (m1[i] && m1[i] > m2[i]) return false;
    //     }
    //     return true;
    // }
    string minWindow(string s, string t) {
        int m1[128] = {0}, m2[128] = {0}, k = t.size(), n = s.size(), l=0, r, m=0, target=0;
        pi sol = {0,n};
        for (r = 0; r < k; r++) {
            if (!m1[t[r]]) target++;
            m1[t[r]]++;
            // m2[s[r]++;
            // s_l+=s[r];
        }
        // if (cmp(m1,m2)) sol = s_l;
        for (r = 0; r<n; r++) {
            int c = s[r];
            if (m1[c]) {
                m2[c]++;
                if (m2[c] == m1[c]) {
                    m++;
                }
                // if (m2[c] > m1[c] && c == s[l]-'A') {
                //     m2[c]--;l++;
                // }
            }
            while (l < r && (!m1[s[l]] || m2[s[l]] > m1[s[l]])) {m2[s[l]]--; l++; }
            if (target == m && r-l < sol.S-sol.F) sol = {l,r};
        }
        string solution ="";
        if (m < target) return solution;
        for (int i = sol.F; i <= sol.S; i++) {
            solution +=s[i];
        }
        return solution;
    }
};

//YES LET'S GO
// ok it uses similar techniques as permutation_in_string. 
// remember the concepts of keeping a "matches" and "target_matches" integer, instead of checking N times.
// remember the concepts of expanding and reducing windows.
// remember that, for 'A' and 'a' test cases, an array of 128 is used. 