#include <bits/stdc++.h>
using namespace std;

int main(){
    	int n;cin>>n;
    	int f=n-1;
        if(n==0){
            cout<<"No"<<endl;
        }
        else{
            if((n&f)==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
	return 0;}