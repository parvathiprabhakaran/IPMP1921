class Solution {
public:
    int numberOfRounds(string s, string f) {
        vector<string>a;a={"00","15","30","45"};
        string h1=s.substr(0,2),h2=f.substr(0,2),m1=s.substr(3,2),m2=f.substr(3,2);
        if(h1>h2){int g1=stoi(h1),g2=stoi(h2);
            int ss=lower_bound(a.begin(),a.end(),m1)-a.begin();int ee=upper_bound(a.begin(),a.end(),m2)-a.begin()-1;
            return ((4-ss)+ee+g2*4+(24-(g1+1))*4);
        }
        else if(h1==h2){int g1=stoi(m1),g2=stoi(m2);
            int ss=lower_bound(a.begin(),a.end(),m1)-a.begin();
            int ee=upper_bound(a.begin(),a.end(),m2)-a.begin()-1;if(g2<g1){return 92+(4-ss)+ee;}
            return max((ee-ss),0);
        }
        else{
            int ss=lower_bound(a.begin(),a.end(),m1)-a.begin();
            int ee=upper_bound(a.begin(),a.end(),m2)-a.begin()-1;int g1=stoi(h1),g2=stoi(h2);
            if(g1==(g2-1)){
                return (ee+(4-ss));
            }
            return ee+(4-ss)+(g2-g1-1)*4;
        }
    return 0;}
};