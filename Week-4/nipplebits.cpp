#include <bits/stdc++.h>
using namespace std;
#define CHARBIT 8
//n&0xF0, n&0x0F
unsigned int swapBits(unsigned int x)
{   int g=max((int)((long double)log10((long double)(x))/(long double)log10((long double)(2)))+1,8);
    int f=g-4;
    int m=x>>(f);int s=(x>>4)<<4;int n=s^x;int d=m<<(g-8);d=d^(x>>4);n=n<<(g-8);n=n|d;n=n<<4;n=n|m;return n;
}
int main(){
ios_base::sync_with_stdio(false); 
    int n=3413;
    cout<<swapBits(n);return 0;}