class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] > 0) {
                pos.push_back(nums[i]);
            }else {
                neg.push_back(nums[i]);
            }
        }
        
        int i = 0, j = 0;

        while( i < pos.size() || j < neg.size()) {
            if (i < pos.size()) {
                nums[i+j]=pos[i];
                ++i;
            }
            if (j < neg.size()) {
                nums[i+j]=neg[j];
                ++j;
            }
        }
        return nums;
    }
};
