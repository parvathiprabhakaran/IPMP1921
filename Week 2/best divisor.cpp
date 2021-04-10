#include <bits/stdc++.h>

using namespace std;


int s(int n){
  int p=0;while(n>0){
    p+=(n%10);n=n/10;
  }return p;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');int p=0,m=0;
    for(int i=1;i<=(int)(sqrt(n));i++){
      if(i*i==n){if(s(i)==m && i<p){p=i;}if(s(i)>m){p=i;m=s(i);}
      }else{if(n%i==0){if(s(i)==m && i<p){p=i;}
        if(s(i)>m){p=i;m=s(i);}if(s(n/i)==m && n/i<p){p=n/i;}
        if(s(n/i)>m){p=n/i;m=s(n/i);}
      }}
    }cout<<p<<endl;return 0;}

