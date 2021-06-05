#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pr;
const long long INF =  1LL << 60 ;
long long dis[50005];
bool vis[10005][10005];
int main()
{
  int n,m;   cin>>n>>m;
  vector< pair<int,int> > v[n+1];
  for(int i=0;i<m;++i)
  {
    int x,y,w;  cin>>x>>y>>w;
    v[x].push_back(make_pair(y,w));
    v[y].push_back(make_pair(x,w));
  }
  int s,d;  cin>>s>>d;
  queue<int> q;
  q.push(s);
  q.push(0);
  while(!q.empty())
  {
    int h = q.front();
    q.pop();
    int cost = q.front();
    q.pop();
    vector< pair<int,int> >::iterator i;
    for(i=v[h].begin();i!=v[h].end();++i)
    {
      if(!vis[i->first][cost|i->second])
      {
    vis[i->first][cost|i->second] = true; q.push(i->first); q.push(cost|i->second);
      }
    }
  }
  int ans = -1;
  for(int i=1;i<=1024;++i)
  if(vis[d][i])
     {
       ans = i;  break;
   }
    
  cout<<ans<<endl;  
}