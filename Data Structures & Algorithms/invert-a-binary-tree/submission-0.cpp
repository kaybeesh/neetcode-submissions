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
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }

    void swapN(TreeNode*& a, TreeNode*& b) {
        TreeNode* t = a;
        a = b;
        b = t;
    }

    void invert(TreeNode* rt) {
        if(!rt) return;

        // swap these nodes
        swap(rt->left,rt->right);
        invert(rt->left);
        invert(rt->right);
    }
};
