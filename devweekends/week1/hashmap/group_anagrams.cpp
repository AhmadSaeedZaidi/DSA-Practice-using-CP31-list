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
        unordered_map<string,vector<string>> v;
        vector<vector<string>> sol;
        int i;
        for (auto s:strs) {
            vector<int> m(26, 0);
            for (auto c:s) {
                m[c-'a']++;
            }
            string key = "";
            for (i = 0; i < 26; i++) {
                key +='#'+char(m[i]);
    
            }
            v[key].push_back(s);
        }
        for (auto m:v) {
            sol.push_back(m.S);
        }
        return sol;

    }
};

// seems to be the best possible solution