class Solution {
public:
    int largestValsFromLabels(vector<int>& a, vector<int>& b, int w, int u) {
        int n=a.size();
        priority_queue<pair<int,int>>v;map<int,int>s;
        for(int i=0;i<n;i++){
            v.push({a[i],b[i]});
            s[b[i]]=0;
        }
        int l=0;int t=0;while(!v.empty()){
            int g=(v.top()).first,h=(v.top()).second;v.pop();
            if(s[h]==u){continue;}
            l+=g;s[h]++;t++;if(t==w){break;}
        }
        return l;
        
    }
};