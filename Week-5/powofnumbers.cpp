#define ll long long
class Solution {
  public:
  ll m=1000000007;
  vector<vector<ll>> pro(vector<vector<ll>>& c,vector<vector<ll>>&d){
      vector<vector<ll>>e(c);
      for(int i=0;i<2;i++){
          for(int j=0;j<2;j++){
              e[i][j]=0;
              for(int k=0;k<2;k++){
                  e[i][j]=(e[i][j]%m+(c[i][k]%m*d[k][j]%m)%m)%m;
              }
          }
      }
      return e;
  }
    long long int nthFibonacci(long long int n){
        if(n==0){return 0;}if(n==1){return 1;}
        vector<vector<ll>>p(2,vector<ll>(2));
        vector<vector<ll>>ans(2,vector<ll>(2));
        ans={{1,0},{0,1}};
        p={{1,1},{1,0}};
        n--;while(n>0){
            if(n%2){
                ans=pro(ans,p);
            }
            n=n/2;p=pro(p,p);
        }
        return (ans[0][0])%m;
    } 
};