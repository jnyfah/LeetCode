class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0, end = nums.size()-1, cur = 0;
        
        while(cur <= end) {
            if(nums[cur] == 0) {
                swap(nums[start], nums[cur]);
                start++;  cur++;
            }else if(nums[cur] == 2) {
                swap(nums[cur], nums[end]);
                end --;
            } else {
                cur ++;
            }
           
        }
    }
};
