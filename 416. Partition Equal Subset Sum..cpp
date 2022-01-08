class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        
        for(auto num : nums) {
            sum += num;
        }
        
        if(sum %2 != 0) return false;
        
        int halfsum = sum/2;
        
        vector<bool>dp(halfsum+1, false);
        dp[0]=true;
        
        for(auto num : nums) {
            for(int i = halfsum; i>=num; i--) {
                dp[i] = dp[i] || dp[i-num];
            }
        }
        return dp[halfsum];
    }
};
