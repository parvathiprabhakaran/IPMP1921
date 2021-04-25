#include <bits/stdc++.h>
using namespace std;
#define CHARBIT 8
//n&0xF0, n&0x0F
unsigned int swapBits(int a[],unsigned int n)
{
    int g=0;for(int i=0;i<n;i++){
    	g^=a[i];
    }return g;
}
int main(){
ios_base::sync_with_stdio(false); 
    int n=15;int a[15]={4,4,4,4,2,1,1,2,3,3,10,10,10,11,11}
    cout<<swapBits(a,n);return 0;}