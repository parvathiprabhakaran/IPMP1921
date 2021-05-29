#include <bits/stdc++.h>
class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        map<vector<int>,int> mp;
        for(auto m:matrix){
            mp[m]++;
        }
        int ans=1;
        for(auto m:matrix){
            vector<int> vec=m;
            for(int i=0;i<vec.size();i++){
                if(vec[i]==0){
                    vec[i]=1;
                }
                else{
                    vec[i]=0;
                }
            }
            ans=max(ans,mp[m]+mp[vec]);
        }
        return ans;
    }
};