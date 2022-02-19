class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int count = 0; 
        int ans = count; 
        
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]!=1) {
                count = 0; 
            }
            
            else {
                count++; 
            }
            
            ans = max(ans, count); //chooses the maximum of all consecutive ones
        }
        
        return ans;
    }
};
