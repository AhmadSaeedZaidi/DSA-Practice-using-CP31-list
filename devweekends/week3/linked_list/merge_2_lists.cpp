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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *sol, *c;
        c = new ListNode(67);
        sol = c;
        while (l1 && l2) {
            if (l1->val <= l2->val) {
                c->next = l1;
                c = l1;
                l1 = l1->next;
            } else {
                c->next = l2;
                c = l2;
                l2 = l2->next;
            }
        }
        if (l1) {
            c->next = l1;
        }
        if (l2) {
            c->next = l2;
        }
        c = sol;
        sol = sol->next;
        delete c;
        return sol;
    }
};


// misunderstood the problem initially
// don't make deep copy
// problem can be done in O(2n) where n is the shorter list, very cool.