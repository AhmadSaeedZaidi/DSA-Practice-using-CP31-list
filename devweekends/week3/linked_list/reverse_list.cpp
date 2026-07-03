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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p = nullptr, *c = head, *n;
        while (c) {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        return p;
    }
};

// just remember. 3 pointers.
// n: stores what where we will go
// c: node we are reversing
// p: node we have reversed
// REMEMBER TO RETURN P NOT HEAD;