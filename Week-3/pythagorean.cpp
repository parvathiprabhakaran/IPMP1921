#include <bits/stdc++.h>
using namespace std;
#define CHARBIT 8
#define ll long long
//n&0xF0, n&0x0F
//also can solve using 3sum
void fun(ll a[],ll n)
{ sort(a,a+n);vector<vector<ll>>c;
    for(ll i=2;i<n;i++){
        if(a[i]!=a[i-1]){
            ll l=0,r=i-1;
            while(l<r){
                while((a[l]==a[l-1])&&l>(0)){
                    l++;}while(r<i&&(a[r]==a[r+1])){r--;}
                    if(l>=r){break;}
                if((a[l]*a[l]+a[r]*a[r])==a[i]*a[i]){
                    c.push_back({a[l],a[r],a[i]});
                }if((a[l]*a[l]+a[r]*a[r])<a[i]*a[i]){
                    l++;
                }else{
                    r--;
                }
            }
        }
    }for(int i=0;i<c.size();i++){
        cout<<c[i][0]<<" "<<c[i][1]<<" "<<c[i][2]<<endl;
    }return ;
}
int main(){
ios_base::sync_with_stdio(false); 
ll n;cin>>n;ll a[n];for(ll i=0;i<n;i++){
    cin>>a[i];}
    fun(a,n);
   return 0;}