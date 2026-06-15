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

private:
    int ans = 0;

public:
    int diameterOfBinaryTree(TreeNode* root) {
        d(root);
        return ans;
    }

    int d(TreeNode*& r) {
        if(!r) return 0;


        int ld = d(r->left);
        int rd = d(r->right);

        int diam = ld + rd;
        int depth = 1 + max(ld , rd);

        ans = max(ans, diam);
        return depth;
    }
};
