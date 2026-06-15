/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxDepth(TreeNode* root) {
        return findDepth(root, 0);
    }

    int findDepth(TreeNode*& r, int d) {
        if(!r) return d;

        // increment depth
        d++;

        int ld = findDepth(r->left, d);
        int rd = findDepth(r->right, d);

        return max(ld, rd);
    }
};
