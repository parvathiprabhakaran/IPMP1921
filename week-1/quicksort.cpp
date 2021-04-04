#include <bits/stdc++.h>
using namespace std;

int part(int a[],int l,int r){
	int p=a[l];int u=l+1,v=r;
	while(u<=v){
		while(u<v&&a[u]<=p){u++;}
		while(v>l&&a[v]>p){v--;}
		if(u>=v){break;}else{
			int t=a[u];a[u]=a[v];a[v]=t;
		}
	}a[l]=a[v];
	a[v]=p;return v;
}
void quick(int a[],int l,int r){
	if(l>=r){return;}
	int p=part(a,l,r);
	quick(a,l,p-1);quick(a,p+1,r);
}
int main(){
    	int n;cin>>n;
    	int a[n];for(int i=0;i<n;i++){cin>>a[i];}
    	quick(a,0,n-1);
    	for(int i=0;i<n;i++){
    		cout<<a[i]<<" ";
    	}
	return 0;}