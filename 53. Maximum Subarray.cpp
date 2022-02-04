class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = 0; int total = INT_MIN;
        
        for(int i = 0; i< nums.size(); i++){
            cur +=nums[i];
            total = max(total, cur);
            
            if(cur < 0) {
                cur = 0;
            }
            
        }
        return total;
    }
};
