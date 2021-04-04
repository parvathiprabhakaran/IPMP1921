#include <bits/stdc++.h>
using namespace std;
void countsort(int a[],int n){
	int m;int g=INT_MIN,h=INT_MAX;
	for(int i=0;i<n;i++){
		g=max(g,a[i]);h=min(h,a[i]);
	}
	m=g-h+1;int cnt[m];memset(cnt,0,sizeof(cnt));
	for(int i=0;i<n;i++){
		cnt[a[i]-h]++;
	}for(int i=1;i<m;i++){
		cnt[i]+=cnt[i-1];
	}
	int k=-1,l=0;for(int i=0;i<m;i++){int g=cnt[i];cnt[i]-=l;if(cnt[i]>0){
             int t=cnt[i]+k;k=t;
             while(cnt[i]>0){
             	a[t]=i+h;t--;cnt[i]--;
             }l=g;}
	}return;
}
int main(){
    	int n;cin>>n;
    	int a[n];for(int i=0;i<n;i++){cin>>a[i];}
    	countsort(a,n);
    	for(int i=0;i<n;i++){
    		cout<<a[i]<<" ";
    	}
	return 0;}