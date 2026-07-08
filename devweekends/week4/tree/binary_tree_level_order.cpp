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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode *root) {
        vector<vi> sol;
        vi l;
        deque<TreeNode*> q;
        if (root) q.push_front(root);
        int n;
        TreeNode *node;
        while (!q.empty()) {
            n = q.size();
            for (int i = 0; i < n; i++) {
                node = q.back();
                q.pop_back();
                l.push_back(node->val);
                if (node->left) q.push_front(node->left);
                if (node->right) q.push_front(node->right);
            }
            sol.push_back(l);
            l.clear();
            
        }
        return sol;

    }
};

// bfs implementation, using queue and while loop.