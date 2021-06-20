class Solution {int n=0;struct TreeNode* p=NULL;
public:
                void tra(TreeNode* root,int k){
                    if(root==NULL){return;}tra(root->left,k);n++;if(n==k){p=root;return;}tra(root->right,k);return;
                }
    int kthSmallest(TreeNode* root, int k) {
        tra(root,k);return p->val;
        
    }
};