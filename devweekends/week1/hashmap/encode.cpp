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
    string encode(vector<string>& strs) {
        string sol = "";
        for (auto s:strs) {
            sol += s+'\n';
        }
        return sol;
    }

    vector<string> decode(string s) {
        char c = s[0];
        string t = "";
        vector<string> sol;
        int i = 0;
        while (c!='\0') {
            c = s[i];
            if (c == '\n'){
                sol.push_back(t);
                t = "";
            } else {
                t +=c;
            }
            i++;
        }
        return sol;
    }
};

//weird problem. don't really understand if my solution was correct or not.


