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
    // TreeNode* LCA(TreeNode* root, TreeNode* p, TreeNode* q) {
    //     if (!root) return root;
    //     if (root->val < p->val) return LCA(root->right,p,q);
    //     if (root->val > q->val) return LCA(root->left,p,q);
    //     return root;
    // }
    // TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    //     if (p->val > q->val) swap(p,q);
    //     return (p->val < q->val) ? LCA(root,p,q) : LCA(root,q,p);
    // }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (p->val > q->val) swap(p,q);
        while (root) {
            if (root->val < p->val) root = root->right;
            else if (root->val > q->val) root = root->left;
            return root;
        }
        return nullptr;
    }
};

// base attempt with recursion. it takes too much space due to the recursion
// now to try with O(1) space.
// O(1) space method runs, also improved with good coding practices.