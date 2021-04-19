#include <bits/stdc++.h>
using namespace std;

int main(){
        int n;cin>>n;
        int m=log10(n)/log10(2);
        int p=0;for(int i=m;i>=m/2;i--){
            if((n&(1<<i))!=0){
                p=p|(1<<(m-i));
            }if((n&(1<<(m-i)))!=0){
                p=p|(1<<(i));
            }
        }cout<<p<<endl;
    return 0;}