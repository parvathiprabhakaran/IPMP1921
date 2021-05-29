class Solution {
public:
	int maxCoins(vector<int>& nums) {
		vector<int> arr;
		arr.push_back(1);
		for(int i=0;i<nums.size();i++){
			arr.push_back(nums[i]);
		}
		arr.push_back(1);
		int n=nums.size();
		vector<vector<int>> dp(n+2,vector<int>(n+2));
		for(int l=3;l<=n+2;l++){
			for(int i=0;i<=n+2-l;i++){
				for(int j=i+1;j<i+l-1;j++){
					dp[i][i+l-1]=max(dp[i][i+l-1],arr[i]*arr[i+l-1]*arr[j]+dp[i][j]+dp[j][i+l-1]);
				}
			}
		}

		return dp[0][n+1];
	}
};