class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int t) {
        int m=a.size(),n=a[0].size();int l=0,r=n-1,ans=-1;
        while(l<m&&r>=0){
            if(a[l][r]==t){return true;}
            if(a[l][r]>t){
                r--;
            }else{
                l++;
            }
        }
    return false;}
};