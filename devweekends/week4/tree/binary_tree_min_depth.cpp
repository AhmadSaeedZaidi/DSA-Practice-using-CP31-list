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
    // int minDepth(TreeNode* root) {
    //     if (!root) return 0;
    //     int left = minDepth(root->left);
    //     int right = minDepth(root->right);
    //     if (!(left && right)) {
    //         return left + right + 1;
    //     }
    //     return 1 + min(left,right);
    // }
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        deque<TreeNode*> q;
        int sol = 0, size;
        TreeNode *n;
        q.push_front(root);
        while(!q.empty()) {
            size = q.size();
            for (int i = 0; i < size; i++) {
                n = q.back();
                q.pop_back();
                if (!n->left && !n->right) return sol+1;
                if (n->left) q.push_front(n->left);
                if (n->right) q.push_front(n->right);
            }
            sol++;
        }
        return sol;
    }
};