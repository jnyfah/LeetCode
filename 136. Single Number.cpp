class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for(int i =0; i<nums.size()-1;) {
            if(nums[i] != nums[i+1]) {
                return nums[i];
            }else {
                i+=2;
            }
        }
        return nums[nums.size()-1];
    }
};
