class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j = 0;   //keep track
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i]%2 == 0) {
                std::swap(nums[i], nums[j]);
                j++;
            }
        }
        return nums;
    }
};
