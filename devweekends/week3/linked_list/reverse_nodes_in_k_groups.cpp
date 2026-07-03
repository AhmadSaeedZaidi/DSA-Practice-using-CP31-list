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
    ListNode* reverse1Group(ListNode *head, ListNode *f) {
        ListNode *p = f, *c = head, *n;
        int i = 0;
        while (c != f) {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        return p;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *f = head, *s = new ListNode(67,head), *tmp;
        head = s;
        int i = 0;
        while (f || i==k) {
            if (i == k) {
                tmp = s->next;
                s->next = reverse1Group(s->next, f);
                s = tmp;
                i = 0;
            }
            if (f) {f=f->next; i++;}
        }
        tmp = head;
        head=head->next;
        delete tmp;
        return head;
    }
};


// can be done with recursion or two pointer
// recursion uses call stack, which is O(k) space
// two pointer is O(1) space.
// I will use two pointer.
// well more like 2 pointer + 3 pointer helper