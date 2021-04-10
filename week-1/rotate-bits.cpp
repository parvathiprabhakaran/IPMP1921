#include <bits/stdc++.h>
#define uint unsigned int 
using namespace std;

int main(){
        uint n;cin>>n;
        uint m;cin>>m;uint p=0,q=0;uint f=m;
        p=n<<m;q=n>>(32-m);
        cout<<(p|q)<<endl;p=0;q=0;
        p=n>>m;q=n<<(32-m);
        cout<<(p|q)<<endl;
    return 0;}