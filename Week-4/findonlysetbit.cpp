#include <bits/stdc++.h>
using namespace std;
#define CHARBIT 8
unsigned int swapBits(unsigned int x)
{
    return (int)((long double)log10((long double)(x))/(long double)log10((long double)(2)))+1;
}
int main(){
ios_base::sync_with_stdio(false); 
    int n=8;
    if((n&(n-1))!=0){
        cout<<"Invalid"<<endl;
    }else{
    cout<<swapBits(n)<<endl;
    }return 0;}