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
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *rabbit = head , *tutel = head;
        while (tutel != nullptr) {
            if (rabbit == tutel) {
                return true;
            }
            tutel = tutel->next;
            if (rabbit) rabbit = rabbit->next; else return false;
            if (rabbit) rabbit = rabbit->next;
        }
        return false;
    }
};