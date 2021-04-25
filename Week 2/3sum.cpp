#define ll long long
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>>c;int n=a.size();
        unordered_map<int,int>b;map<multiset<int>,int>e;for(int i=0;i<n;i++){
            b[a[i]]++;
        }set<int>s(a.begin(),a.end());
        for(auto it=s.begin();it!=s.end();it++){b[*it]--;
            for(auto it1=it;it1!=s.end();it1++){if(b[*it1]>0){
                b[*it1]--;
                int d=*it+*it1;d=d*(-1);if(b[d]>0&&d>=(*it1)){c.push_back({*it,*it1,d});}b[*it1]++;
                }}b[*it]++;
        }return c;}
};