#include <bits/stdc++.h>
using namespace std;
int p=0;
int hcf(int a,int b){if(b==0){return a;}return hcf(b,a%b);}
void dfs(int n,vector<vector<int>>& b,int d[],vector<vector<int>>& a){
  d[n]=1;for(auto it=b[n].begin();it!=b[n].end();it++){if(!d[*it]){dfs(*it,b,d,a);a[n].insert(a[n].begin(),a[*it].begin(),a[*it].end());}}
  a[n].push_back(n);
return;
  }
int main(){
  int q;cin>>q;for(int i=0;i<q;i++){
    int n;cin>>n;vector<int>w;vector<vector<int>>b(n,w);for(int j=0;j<n-1;j++){int x,y;cin>>x>>y;b[x-1].push_back(y-1);b[y-1].push_back(x-1);}vector<vector<int>>a(n,w);vector<int>c(n,0);
    int g,k;cin>>g>>k;int d[n];memset(d,0,sizeof(d));dfs(0,b,d,a);for(int j=0;j<g;j++){int u,v;cin>>u>>v;if(a[u-1].size()>a[v-1].size()){for(auto it=a[v-1].begin();it!=a[v-1].end();it++){c[*it]--;}}else{for(int i=0;i<n;i++){if(find(a[u-1].begin(),a[u-1].end(),i)==a[u-1].end()){c[i]--;}}
    }}int t=0;
  for(int j=0;j<n;j++){if(c[j]+g>=k){t++;}}int h=hcf(n,t);cout<<t/h<<"/"<<n/h<<endl;} 
return 0;}
