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

        for (i = head; i!= nullptr; i=i->next) {
            cpy = new Node(i->val);
            cpy->next = i->next;
            i->next = cpy;
            i = cpy;
        }
        cpy = nullptr;

        for (Node *i = head; i!= nullptr; i=i->next->next) {
            i->next->random = (i->random==nullptr) ?  nullptr : i->random->next;
        }

        sol = head->next;
        cpy = sol;
        i = head;
        while (cpy != nullptr) {
            tmp = cpy->next;
            if (cpy->next == nullptr) {
                i->next = tmp;
            } else {
                cpy->next = tmp->next;
                i->next = tmp;
            }
            i = i->next;
            cpy=cpy->next;
        }
        return sol;
        
    }
};

// can be done with hashmap
// MUCH faster due to caching, but more memory needed.