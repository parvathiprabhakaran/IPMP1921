#define ll long long
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    ll s=0;int l=0,r=0;
	    int x=-1,y=-1;ll p=0;vector<int>c;if(n==0){
	        return {-1};
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]<0){p=0;l=i+1;r=i+1;continue;}
	        p+=a[i];
	        if(p>=s){
	                s=p;x=l;y=r;
	            }r++;
	    }if(x==-1){return {-1};}
	    for(int i=x;i<=y;i++){
	        c.push_back(a[i]);
	    }
	    return c;
	}
};