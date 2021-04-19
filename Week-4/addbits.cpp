#include <bits/stdc++.h>
using namespace std;
#define CHARBIT 8
unsigned int add(int n,int m)
{if(m==0){return n;}
    int s=n^m;int a=n&m;return add(s,a<<1);
}
int main(){
ios_base::sync_with_stdio(false); 
    int n=2109,m=1213;cout<<add(n,m);
    return 0;}