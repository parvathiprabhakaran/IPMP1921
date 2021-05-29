class Solution {
public:
    int majorityElement(vector<int>& a) {
        int h=0,p=a[0];
        int n=a.size();
        for(int i=0;i<n;i++){
            if(h==0){
                h=1;p=a[i];continue;
            }
            if(a[i]==p){
                h++;
            }else{
                h--;
            }
        }
        return p;
    }
};