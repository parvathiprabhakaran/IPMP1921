class Solution {
public:
    bool che=true;
    vector<vector<int>>c={{0,1},{0,-1},{1,0},{-1,0}};
    void dfs(vector<vector<int>>& a,int m,int n,vector<vector<int>>& v,vector<vector<int>>& dp,int k,int x,int y){
    v[x][y]=1;dp[x][y]=k;for(int l=0;l<4;l++){
        int i=x+c[l][0],j=y+c[l][1];if(i>=0&&j>=0&&i<m&&j<n&&!v[i][j]&&a[i][j]==1){
            dfs(a,m,n,v,dp,k,i,j);
        }
    }
    return;}
    void dfs1(vector<vector<int>>& b,int m,int n,vector<vector<int>>& v,vector<vector<int>>& dp,int k,int x,int y){
        v[x][y]=1;if(k==-1){if(dp[x][y]==0){che=false;}k=dp[x][y];}else{if(dp[x][y]!=k){che=false;}}
        for(int l=0;l<4;l++){
        int i=x+c[l][0],j=y+c[l][1];if(i>=0&&j>=0&&i<m&&j<n&&!v[i][j]&&b[i][j]==1){
            dfs1(b,m,n,v,dp,k,i,j);
        }
    }
        return ;
    }
    int countSubIslands(vector<vector<int>>& a, vector<vector<int>>& b) {
        int m=a.size(),n=a[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        vector<vector<int>>v(m,vector<int>(n,0));
        int u=1;for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==1&&!v[i][j]){
                    dfs(a,m,n,v,dp,u,i,j);u++;
                }
            }
        }
        int t=0;for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v[i][j]=0;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(b[i][j]==1&&!v[i][j]){int k=-1;che=true;
                    dfs1(b,m,n,v,dp,k,i,j);if(che){t++;}
                }
            }
        }
            return t;
    }
};