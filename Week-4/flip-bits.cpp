#include <bits/stdc++.h>
using namespace std;

int main(){
        int n,a,b;cin>>a>>b;
        n=a^b;
        int m=log10(n)/log10(2);
        int p=0;for(int i=m;i>=0;i--){
            if((n&(1<<i))!=0){
                p++;}
        }cout<<p<<endl;
    return 0;}