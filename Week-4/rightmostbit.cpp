#include <bits/stdc++.h>
using namespace std;
#define CHARBIT 8
unsigned int get(int n)
{return n&(n-1);
}
int main(){
ios_base::sync_with_stdio(false); 
    int n;cin>>n;cout<<get(n);
	return 0;}
