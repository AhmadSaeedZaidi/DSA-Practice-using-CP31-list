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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<mi> v;
        vector<vector<string>> sol;
        int i; bool found;
        for (auto s:strs) {
            mi m;
            for (auto c:s) {
                m[c]++;
            }
            i = 0; found = false;
            for (auto map:v) {
                if (map == m) {
                    sol[i].push_back(s);
                    found = true;
                }
                i++;
            }
            if (!found) {
                sol.push_back({s});
                v.push_back(m);
            }
        }

        return sol;

    }
};

// solution works, but i can improve it.