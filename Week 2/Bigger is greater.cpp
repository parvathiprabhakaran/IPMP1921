#include <bits/stdc++.h>

using namespace std;

// Complete the biggerIsGreater function below.
string biggerIsGreater(string w) {int n=w.size();if(n==1){return "no answer";}int i,j=(-1),k,l;string a,b;
i=n-1;while(i>0){
  if(w[i-1]<w[i]){j=i-1;break;}i--;
}if(j<0){return "no answer";}i=n-1;while(i>j){if(w[i]>w[j]){a=w.substr(0,j)+w[i]+w.substr(j+1,i-j-1)+w[j]+w.substr(i+1,n-i-1);break;}i--;}for(i=j+1;i<=(j+n)/2;i++){if(i!=n-i+j){a=a.substr(0,i)+a[n-(i-j)]+a.substr(i+1,n-(i-j)-i-1)+a[i]+a.substr(n-(i-j)+1,(i-j)-1);}}
return a;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
