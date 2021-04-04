#include <bits/stdc++.h>
using namespace std;
void insertsort(int a[],int n){
	for(int i=1;i<n;i++){
		int t=a[i];int j=i-1;
		for( j=i-1;j>=0&&a[j]>t;j--){
			a[j+1]=a[j];
		}a[j+1]=t;
	}
	return;
}
int main(){
    	int n;cin>>n;
    	int a[n];for(int i=0;i<n;i++){cin>>a[i];}
    	insertsort(a,n);
    	for(int i=0;i<n;i++){
    		cout<<a[i]<<" ";
    	}
	return 0;}