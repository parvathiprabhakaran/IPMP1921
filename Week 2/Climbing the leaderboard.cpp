#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <bits/stdc++.h> 
using namespace std;
int main(){
  int n,k,i,j,t=0;cin>>n;vector<int>a;for(i=0;i<n;i++){cin>>j;if(i==0){a.push_back(j);t++;}if(i!=0 &&(j!=a[t-1])){a.push_back(j);t++;}}cin>>k;long long int b[k];for(i=0;i<k;i++){cin>>b[i];}sort(a.begin(),a.end());
  for(i=0;i<k;i++){vector<int>::iterator p,q;if(b[i]>=a[t-1]){cout<<1<<endl;}else{p=upper_bound(a.begin(),a.end(),b[i]);
  q=lower_bound(a.begin(),a.end(),b[i]);if(p!=q){cout<<(a.end()-q)<<endl;}else{cout<<(a.end()-q)+1<<endl;}}
}return 0;}