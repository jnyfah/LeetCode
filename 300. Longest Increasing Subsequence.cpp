class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        std::vector<int>lis(nums.size(), 1);
        int res= 1;
        
        for(int i = 1; i<nums.size(); i++) {
            for(int j = 0; j<i; j++) {
                if((nums[i]>nums[j]) && lis[i]<lis[j]+1) {
                    lis[i] = lis[j]+1;
                    res = max(res, lis[i]);
                }
            }
        }
        return res;
    }
};
