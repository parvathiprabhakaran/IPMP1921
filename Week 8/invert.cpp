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
    TreeNode* inv(TreeNode* r){
        if(!r){return r;}if(!r->left&&!r->right){return r;}
        TreeNode* s=r->left;TreeNode* t=r->right;r->left=inv(t);
        r->right=inv(s);return r;
    }
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* r=root;TreeNode* t=root;r=inv(r);
        return inv(inv(root));
    }
};