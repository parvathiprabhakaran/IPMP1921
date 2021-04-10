#include <bits/stdc++.h>
#define ll long  double
using namespace std;

vector<string> split_string(string);

/*
 * Complete the movingTiles function below.
 */
vector<ll> m(int l, int s1,int s2, vector<ll> q) {
    vector<ll>v;for(auto i=0;i<q.size();i++){
      ll w=sqrt((ll)q[i]);w=(ll)sqrt(2)*((ll)(l)-w)/((ll)(abs(s2-s1)));
      v.push_back(w);
    }
return v;
}

int main()
{int l,s,r,n;cin>>l>>s>>r;cin>>n;vector<ll>q(n);for(int i=0;i<n;i++){
  cin>>q[i];
}vector<ll>c=m(l,s,r,q);for(int i=0;i<n;i++){
  cout.precision(20);cout<<c[i]<<endl;
}return 0;}
