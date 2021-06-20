class Solution {
public:
    bool comp(TreeNode* r1,TreeNode* r2){
        if(!r1&&!r2){return true;}if(!r1||!r2){return false;}
        if(r1->val!=r2->val){return false;}
        if(!r1->left&&r2->right){return false;}if(!r1->right&&r2->left){return false;}
        if(r1->left&&!r2->right){return false;}if(r1->right&&!r2->left){return false;}
        return comp(r1->left,r2->right)&&comp(r1->right,r2->left);
    }
    bool isSymmetric(TreeNode* r) {if(!r){return true;}if(!r->left&&!r->right){return true;}
                                      if(!r->left||!r->right){return false;}
        return comp(r->left,r->right);
    }
};