class Solution {
public:
    int fourSumCount(vector<int>& n1, vector<int>& n2, vector<int>& n3, vector<int>& n4) {
        unordered_map<long long,long long>a,b;int n=n1.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[n1[i]+n2[j]]++;
            }
        }for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                b[n3[i]+n4[j]]++;
            }
        }
        long long s=0;for(auto it=a.begin();it!=a.end();it++){
            long long p=(*it).first,q=(*it).second;
            s+=(q*b[(-1)*p]);
        }return s;
    }
};