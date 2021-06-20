class Solution {
public:
    int t=0;
    void che(TreeNode* r,int s,map<int,int>& m,int i){
        if(!r){return;}int g=i+r->val;if(g==s){t++;}
        if(m[g-s]){t+=m[g-s];}m[g]++;if(r->left){che(r->left,s,m,g);}
        if(r->right){che(r->right,s,m,g);}m[g]--;
    }
    int pathSum(TreeNode* r, int ta) {if(!r){return 0;}t=0;
            map<int,int>m;che(r,ta,m,0);
                                      return t;
    }
};