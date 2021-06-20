class Solution {
public:
    string largestOddNumber(string s) {
        int n=s.size();
        string a="";int i;
        for( i=n-1;i>=0;i--){
            if((s[i]-'0')%2==1){
                break;
            }
        }
        if(i==-1){return a;}
        a=s.substr(0,i+1);return a;
    }
};