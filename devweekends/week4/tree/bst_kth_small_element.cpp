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
    int traverse(TreeNode* root, int &k, int &s) {
        if (!root) return -1;
        int left = traverse(root->left, k, s);
        if (left!=-1) return left;
        s++;
        if (s == k) return root->val;
        return traverse(root->right, k, s);
    }
    int kthSmallest(TreeNode* root, int k) {
        int s = 0;
        return traverse(root,k, s);
    }
};

// first try easy peasy
// think of the naive solution:
// traverse in order with a vector, return when vector size == k
// optimize space, don't store values. just store your position in the vector
// then, make a way for the answer to propagate upwards.
// also check left before right, so that right branches never expand.