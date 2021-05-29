class Solution {
public:
    bool lemonadeChange(vector<int>& b) {
        int f=0,t=0,n=b.size();
        if(b[0]>5){return false;}
        for(int i=0;i<n;i++){
            if(b[i]==5){f++;}
            else if(b[i]==10){
                if(f==0){return false;}
                t++;f--;
            }else{
                if(t>0&&f>0){
                    t--;f--;
                }else if(f>=3){
                    f-=3;
                }else{
                    return false;
                }
            }
        }return true;
    }
};