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
    unordered_map<int,int> m;
    TreeNode* makeTree(vector<int>& preorder, int pre_i, int pre_j, int in_i, int in_j) {
        if (pre_i > pre_j || in_i > in_j) return nullptr;
        int val = preorder[pre_i];
        TreeNode* n = new TreeNode(val);
        int mid = m[val], left = mid - in_i;

        n->left = makeTree(preorder, pre_i+1, pre_i+left, in_i, mid-1);
        n->right = makeTree(preorder, pre_i+left+1, pre_j,mid+1, in_j);
        return n;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int size = inorder.size();
        for (int i = 0; i < size; i++) {
            m[inorder[i]] = i;
        }
        return makeTree(preorder , 0, size-1, 0, size-1);
    }
};

// note:
// PREORDER INORDER POSTORDER ALL MEANS DFS
// REMEMBER DFS HAS 3 FORMS
// LEVEL ORDER = BFS
// anyways, this was a brand new pattern for me, will need revisits.
// basically, amount of indixes left of root in inorder
// same as amount of indexes after root in preorder
// after this realization, the problme is easy peasy.