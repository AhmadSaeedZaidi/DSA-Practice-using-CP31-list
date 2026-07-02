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
    // bool cmp(int *m1, int *m2){
    //     for (int i = 0; i < 26; i++) {
    //         if (m1[i] && m1[i] > m2[i]) return false;
    //     }
    //     return true;
    // }
    bool checkInclusion(string s1, string s2) {
        int m1[26] = {0}, m2[26] = {0};
        int k = s1.size(), n = s2.size(), matches=0, target =0;
        if (k > n) return false;
        int l = 0, r = 0;
        for (r = 0; r < k; r++) {
            m1[s1[r]-'a']++;
            if (m1[s1[r]-'a'] == 1) target++;
            m2[s2[r]-'a']++;
            if (m1[s1[r]-'a'] == m2[s2[r]-'a']) matches++;
        }
        if (matches==target) return true;
        for (int r = k; r < n; r++) {
            char c = s2[r];
            if (m1[s1[r]-'a'] == m2[s2[r]-'a']) matches++;
            if (m1[s1[l]-'a'] == m2[s2[l]-'a']) matches++;
            m2[c-'a']++;
            m2[s2[l]-'a']--;
            l++;
            if (matches==target) return true;
        }
        return false;
    }
};

// found perfect solution, pretty happy
// actually nvm, gemini told me an improvement
// replace cmp loop with O(1) check is possible apparently
// i'll work on this later

// working solution:
/*
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
    bool cmp(int *m1, int *m2){
        for (int i = 0; i < 26; i++) {
            if (m1[i] && m1[i] > m2[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int m1[26] = {0}, m2[26] = {0};
        int k = s1.size(), n = s2.size();
        if (k > n) return false;
        int l = 0, r = 0;
        for (r = 0; r < k; r++) {
            m1[s1[r]-'a']++;
            m2[s2[r]-'a']++;
        }
        if (cmp(m1,m2)) return true;
        for (int r = k; r < n; r++) {
            char c = s2[r];
            if (m1[c-'a']) m2[c-'a']++;
            m2[s2[l]-'a']--;
            l++;
            if (cmp(m1,m2)) return true;
        }
        return false;
    }
};
*/