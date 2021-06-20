class Solution {
public:
    void che(TreeNode* r,int s,int i,vector<vector<int>>& c,vector<int>& m){
        if(!r){return;}
        if(!r->left&&!r->right){if((i+(r->val))==s){m.push_back(r->val);c.push_back(m);m.pop_back();}return;}
        m.push_back(r->val);che(r->left,s,i+r->val,c,m);che(r->right,s,i+r->val,c,m);m.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int ta) {
        vector<vector<int>>c;
        vector<int>m;che(root,ta,0,c,m);return c;
    }
};