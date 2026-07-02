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

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr) return head;
        Node *cpy, *sol, *i, *tmp;
        unordered_map<Node*, Node*> m;
        cpy = new Node(head->val);
        m[head] = cpy;
        sol = cpy;
        for (i = head->next; i!= nullptr; i=i->next) {
            tmp = new Node(i->val);
            cpy->next = tmp;
            cpy = cpy->next;
            m[i] = cpy;
        }
        cpy = sol;
        for (i = head; i!=nullptr; i=i->next) {
            cpy->random = m[i->random];
            // cpy->random = (i->random == nullptr) ? nullptr : m[i->random];
            // apparently this is identical, because cpp implicitly returns nullptr in case of this exception, trying to look-up a nullptr in a map.
            cpy = cpy->next;
        }

        return sol;
        
    }
};

// can be done with hashmap
// MUCH faster due to caching, but more memory needed.