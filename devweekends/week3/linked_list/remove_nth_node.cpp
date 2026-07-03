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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head->next) return nullptr;
        ListNode *fast = head, *slow = head, *tmp;
        for (int i = 0; i<n;i++) {
            fast=fast->next;
        }
        if (!fast) {tmp = head->next; delete head; return tmp;}
        while (fast && fast->next) {
            fast=fast->next;
            slow=slow->next;
        }
        tmp=slow->next;
        slow->next = tmp->next;
        delete tmp;
        return head;
    }
};

// tape measure method of two pointer. remember to consider edge cases.
// and remember to delete!!!