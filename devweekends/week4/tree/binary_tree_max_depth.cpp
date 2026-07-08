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
    // int maxDepth(TreeNode* root) {
    //     int sol = 0, n;
    //     if (!root) return 0;
    //     deque<TreeNode*> q;
    //     TreeNode *node;
    //     q.push_front(root);
    //     while (!q.empty()) {
    //         n = q.size();
    //         for (int i = 0; i < n; i++) {
    //             node = q.back();
    //             q.pop_back();
    //             if (node->left) q.push_front(node->left);
    //             if (node->right) q.push_front(node->right);
    //         }
    //         sol++;
    //     }
    //     return sol;
    // }

    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return 1 + max(left,right);
    }
};

// DFS is better in this type of question. since to find max depth, we need to traverse whole tree anyways
// and DFS saves time, by being easy to implement with recursion stack
// and space, as DFS is O(logn) space, while BFS is O(n) space.