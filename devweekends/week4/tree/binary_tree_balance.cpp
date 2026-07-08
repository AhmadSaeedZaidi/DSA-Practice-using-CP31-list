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
    int helper(TreeNode* n) {
        int left, right;
        left = (n->left) ? helper(n->left) : 0;
        right = (n->right) ? helper(n->right) : 0;
        if (abs(left - right) > 1 || left == -1 || right == -1) return -1;
        return 1 + max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        return helper(root) != -1;
    }
};

// first part of BST. simple enough problem, make helper, use some terminator condition (-1), propagate through the tree using DFS.