#include <bits/stdc++.h>
using namespace std;
#define CHARBIT 8
unsigned int getans(int n)
{int m=(n&(n-1));
	m=m^n;return (int)((long double)log10((long double)(x))/(long double)log10((long double)(2)))+1;
}
int main(){
ios_base::sync_with_stdio(false); 
    int n=13;cout<<getans(n)<<endl;
    return 0;}