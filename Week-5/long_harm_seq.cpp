class Solution {
public:
    int findLHS(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        int l=0,r=1,m=0,p=-1;
        while(r<n&&l<=r){
            if(a[r]-a[l]<1){r++;}
            else if(a[r]-a[l]==1){p=0;r++;m=max(m,r-l);}
            else{l++;}
        }
        if(p==-1){return 0;}
        return m;
    }
};