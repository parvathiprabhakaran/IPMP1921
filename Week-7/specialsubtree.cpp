#include <bits/stdc++.h>

using namespace std;
#define lu long unsigned int 

bool comp(vector<int>& a,vector<int>& b){
  if(a[0]==b[0]){if(a[1]+a[2]+a[0]==(b[1]+b[2]+b[0])){return true;}
  return (a[1]+a[2]+a[0])<(b[1]+b[2]+b[0]);}
return a[0]<b[0];}
int find(int u,vector<int>& s){
  if(s[u]<0){return u;}return s[u]=find(s[u],s);
}
void mer(vector<int>& s,int u,int v){
  int a=find(u,s),b=find(v,s);if(s[b]<s[a]){s[a]=b;s[b]-=1;}else{s[b]=a;s[a]-=1;}
return;}
void kruskals(int n, vector<int> fr, vector<int> to, vector<int> we) {
int h=0,t=0;vector<vector<int>>a;for(lu i=0;i<fr.size();i++){vector<int>b(3,0);
b[0]=we[i];b[1]=fr[i]-1;b[2]=to[i]-1;a.push_back(b);
}
sort(a.begin(),a.end(),comp);vector<int>s(n,-1);for(lu i=0;i<a.size();i++){
  int u=a[i][1],v=a[i][2];int p=find(u,s),q=find(v,s);if(p!=q){h+=a[i][0];t++;mer(s,u,v);if(t==(n-1)){cout<<h;return;}}
}cout<<h; return;}

int main()
{int n,m;cin>>n>>m;vector<int>fr(m,0);vector<int>to(m,0);vector<int>we(m,0);
for(int i=0;i<m;i++){cin>>fr[i]>>to[i]>>we[i];}
kruskals(n,fr,to,we);
   return 0;}
