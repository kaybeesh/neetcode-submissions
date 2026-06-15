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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;

        int hl = h(root->left);
        int hr = h(root->right);

        cout<<abs(hl-hr)<<endl;
        cout<<hl<<endl;
        cout<<hr<<endl;

        if(abs(hl-hr) > 1) return false;

        return isBalanced(root->left) && isBalanced(root->right);
        
    }

    int h(TreeNode*& r) {
        if(!r) return 0;
        return 1+ max(h(r->left), h(r->right));
    }
};
