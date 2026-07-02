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
    void reorderList(ListNode* head) {
        ListNode *fast = head, *slow = head, *p = nullptr, *c = nullptr, *n = nullptr;
        while (fast && fast->next) {
            fast = fast->next;
            if (fast) fast = fast->next;
            slow = slow->next;
        }
        // now slow holds middle of array;
        if (slow) c = slow->next;slow->next = nullptr;

        while (c) {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        c = head;
        while (p) {
            n = p->next;
            p->next = c->next;
            c->next = p;
            c = p->next;
            p = n;
        }
    }
};

// 3 parts. 
// 1. find middle using fast + slow
// 2. reverse from middle to end
// 3. merge