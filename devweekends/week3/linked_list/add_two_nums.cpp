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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *sol,*k;
        int x,y,sum,c = 0;
        sol = new ListNode(-1);
        k = sol;
        while (l1 || l2 || c) {
            x = (l1) ? l1->val : 0;
            y = (l2) ? l2->val : 0;
            sum = x + y + c;
            c = sum/10;
            k->next = new ListNode(sum%10);
            k = k->next;
            if (l1) l1=l1->next;
            if (l2) l2=l2->next;
        }
        k->next = nullptr;
        ListNode *del = sol;
        sol = sol->next;
        delete del;
        return sol;
    }
};


// the below solution is intuitive, unwrapped form
// above is cleaned up form
// it's a trivial problem tbh, just merge the arrays, be careful of carry.

// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode *sol, *i, *j,*k, *tmp;
//         int sum,carry = 0;
//         sol = new ListNode(-1);
//         k = sol;
//         while (i && j) {
//             sum = i->val+j->val + carry;
//             carry = (sum > 10) ? 1 : 0;
//             sum = sum%10;
//             tmp = new ListNode(sum);
//             k->next=tmp;
//             k = tmp;
//             i=i->next;j=j->next;
//         }
//         if (!i && !j && carry) {
//             tmp = new ListNode(carry);
//             k->next = tmp;
//             k = tmp;
//             carry = 0;
//         }
//         while (i) {
//             tmp = new ListNode(i->val+carry);
//             k->next = tmp;
//             k = tmp;
//             carry = 0;
//             i=i->next;
//         }
//         while (j) {
//             tmp = new ListNode(j->val+carry);
//             k->next = tmp;
//             k = tmp;
//             carry = 0;
//             j=j->next;
//         }
//         k->next = nullptr;
//         sol = sol->next;
//         return sol;
//     }
// };
