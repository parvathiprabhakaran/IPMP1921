#include <bits/stdc++.h>
using namespace std;
#define CHARBIT 8
unsigned int getAbs(int n)
{
    int const mask = n >> (sizeof(int) * CHAR_BIT - 1);
    return ((n ^ mask) - mask);
}
int main(){
ios_base::sync_with_stdio(false); 
    int n;cin>>n;cout<<get(n);
	return 0;}
