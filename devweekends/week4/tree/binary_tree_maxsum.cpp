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
    int search(TreeNode *root, int &n) {
        if (!root) return 0;
        int left = search(root->left, n);
        int right = search(root->right, n);
        left = max(0,left);
        right =  max(right,0);
        int s = left + root->val + right;
        n = max(n,s);
        return root->val + max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        if (!root) return 0;
        int n = root->val;
        search(root,n);
        return n;
    }
};

// here DFS can be used. find max of left, max of right
// then, at each node, check what the sum of this path would be
// if a path is greater than our stored "max_path" which i named n, we will replace n
// furthermore, we need to discard fully negative paths (max(0,path));
// and yeah, the learning is that, the recursion passes something else, and also maintains a sol by ref.
// byref ensures there's only 1 copy of n, less memory used.