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
/*
 * SLIDING WINDOW: LONGEST REPEATING CHARACTER REPLACEMENT
 * -------------------------------------------------------
 * * a) The "Historical Max" Trick (O(1) instead of O(26))
 * - Don't loop 26 times to find the max frequency in the current window.
 * - Just track: max_freq = max(max_freq, count[s[right] - 'A'])
 * - Why? We only care about finding a LONGER window. A longer window 
 * can ONLY be formed if the historical maximum frequency is beaten.
 * * b) The Translation Formula (Validity Check)
 * - English: "Can I fix the wrong characters with my k budget?"
 * - Math: (Window Length) - (Max Frequency) <= k
 * * c) The "Rigid Window" Optimization (if vs while)
 * - Because we only want the MAXIMUM length, the window never needs 
 * to physically shrink back to a valid state.
 * - Standard: Use `while` to move `left` until the window is valid again.
 * - Optimized: Use `if`. When invalid, move `left++` (and `right++` via 
 * the loop). The window becomes a rigid box that slides across the 
 * array at its current max size until it can legally expand again.
 * * d) Fixed Array > Hash Map
 * - For "Uppercase English Letters", ALWAYS use: int count[26] = {0};
 * - Access via pointer math: count[s[i] - 'A']
 * - Avoids unordered_map hashing overhead and is highly CPU cache-friendly.
 */