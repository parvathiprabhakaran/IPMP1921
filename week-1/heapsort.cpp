#include <bits/stdc++.h>
using namespace std;
int t=0;
void insert(int a[],int v){t++;
	a[t]=v;int i=t;while(i>1){
		int p=i/2;
		if(a[p]<a[i]){
			int g=a[p];a[p]=a[i];a[i]=g;
		}
		else{break;}i=p;p=p/2;
	}
	return;
}
void heapsort(int a[]){
    while(t>1){
    	int r=a[1];a[1]=a[t];a[t]=r;t--;
    	int i=1;while(i<t){
    		int q=2*i,s=q+1,e=q,m=INT_MIN;
    		if(q<=t){m=max(m,a[q]);if(m==a[q]){e=q;}}
    		if(s<=t){m=max(m,a[s]);if(m==a[s]){e=s;}}
    		if(m>a[i]){int f=a[e];a[e]=a[i];a[i]=f;i=e;}else{break;}
    	}
    }return;
}
int main(){
    	int n;cin>>n;
    	int a[n+1];for(int i=0;i<n;i++){int g;cin>>g;insert(a,g);}
    	heapsort(a);
    	for(int i=1;i<=n;i++){
    		cout<<a[i]<<" ";
    	}
	return 0;}