class Solution {
public:
    int rob(vector<int>& nums) {
        std::vector<int>dp(nums.size()+1, 0);
        dp[0]=0;
        dp[1] = nums[0];
        
        for(int i =1; i<nums.size(); i++) {
           int val = nums[i];
           dp[i+1] = std::max(dp[i], dp[i-1] + val);
        }
        
        return dp[nums.size()];
    }
};
