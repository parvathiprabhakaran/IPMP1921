#include <bits/stdc++.h>
using namespace std;

void merge(int a[],int l1,int r1,int l2,int r2){
	int c[r1-l1+1],d[r2-l2+1];int n=r1-l1+1,m=r2-l2+1;
	for(int i=l1;i<=r1;i++){
		c[i-l1]=a[i];
	}for(int i=l2;i<=r2;i++){
		d[i-l2]=a[i];
	}
	int i=0,j=0,t=l1;
	while(i<n&&j<m){
		if(c[i]<=d[j]){a[t]=c[i];i++;}
		else{
			a[t]=d[j];j++;
		}t++;
	}
	while(i<n){
		a[t]=c[i];t++;i++;
	}while(j<m){
		a[t]=d[j];t++;j++;
	}return ;
}
void mergesort(int a[],int l,int r){
	if(l>=r){return ;}
	mergesort(a,l,(l+(r-l)/2));mergesort(a,(l+(r-l)/2)+1,r);
	merge(a,l,(l+(r-l)/2),(l+(r-l)/2)+1,r);
	return ;
}
int main(){
    	int n;cin>>n;
    	int a[n];for(int i=0;i<n;i++){cin>>a[i];}
    	mergesort(a,0,n-1);
    	for(int i=0;i<n;i++){
    		cout<<a[i]<<" ";
    	}
	return 0;}