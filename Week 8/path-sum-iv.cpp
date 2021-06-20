class Solution {
public:
    /**
     * @param nums: the list
     * @return: the sum of all paths from the root towards the leaves
     */
    int pathSumIV(vector<int> &a) {
        vector<vector<pair<int,int>>>cnt(5);
        for(int i=1;i<5;i++){
              vector<pair<int,int>>t((1<<(i-1))+1,{0,-1});
              cnt[i]=t;
        }
        int s=0;
        for(int i=0;i<a.size();i++){
            int t=a[i];int x[3];int j=0;
            while(t>0){
                int p=t%10;x[j]=p;j++;t=t/10;
            }
            cnt[x[2]][x[1]]={1,x[0]};
        }
        int f=0;
        
        for(int i=3;i>=1;i--){
            for(int j=1;j<((1<<(i-1)))+1;j++){
                if(cnt[i][j].first>0){
                cnt[i][j].first=max(1,(cnt[i+1][2*j-1].first+cnt[i+1][2*j].first));
                cnt[i][j].second=(cnt[i][j].second*(cnt[i][j].first))+max(0,cnt[i+1][2*j-1].second)+max(0,cnt[i+1][2*j].second);
                
            }}
        }
        return cnt[1][1].second;
    }
};