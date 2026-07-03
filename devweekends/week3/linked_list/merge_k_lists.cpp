#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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

typedef pair<int, ListNode*> pi;
typedef vector<pi> vi;
typedef greater<pi> gi;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode *l1, ListNode *l2)  {
        ListNode *dum = new ListNode(67), *sol = dum;
        while (l1 && l2) {
            if (l1->val <= l2->val) {
                sol->next = l1;
                l1 = l1->next;
            } else {
                sol->next = l2;
                l2 = l2->next;
                
            }
            sol = sol->next;
        }
        if (l1) sol->next = l1;
        if (l2) sol->next = l2;
        sol = dum->next;
        delete dum;
        return sol;
    }
    ListNode* mergeKLists(vector<ListNode*>& l) {
        int n = l.size(), stride = 1;
        priority_queue<pi,vi,gi> q;
        bool work = true;
        ListNode *sol = new ListNode(67), *dum = sol;
        while (stride < n) {
            for (int i = 0; i +stride < n; i+=stride*2) {
                l[i] = mergeTwoLists(l[i], l[i+stride]);
            }
            stride *=2;
        }
        if (l.empty()) return nullptr;
        return l[0];
    }
};

// for loop approach...
// scared of what the merge approach will look like.