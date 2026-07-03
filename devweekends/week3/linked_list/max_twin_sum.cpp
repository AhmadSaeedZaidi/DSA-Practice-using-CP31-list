#include <bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode *f = head,*p = nullptr,*c = head,*n;
        // if (f->next->next == nullptr) f = nullptr; else f = f->next->next;
        int m = std::numeric_limits<int>::min();
        c = head;
        while (f != nullptr) {
            f = f->next->next;
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        f = n;
        while (f) {
            m = std::max(m,f->val+p->val);
            f=f->next;
            p=p->next;
        }
        return m;

    }
};