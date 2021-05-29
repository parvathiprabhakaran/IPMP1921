
class Solution {
public:
    static bool cmp(vector<int>& a,vector<int>& b){
        double c=sqrt(double(a[0]*a[0]+a[1]*a[1]));
        double d=sqrt(double(b[0]*b[0]+b[1]*b[1]));
        if (c>=d){return false;}
        return true;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& a, int k) {
        vector<vector<int>>c(k,vector<int>(2));int n=a.size();
        sort(a.begin(),a.end(),cmp);
        for(int i=0;i<min(n,k);i++){
            c[i]=a[i];
        }
        return c;
    }
};