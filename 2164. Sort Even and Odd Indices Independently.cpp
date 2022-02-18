class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        if(nums.size() < 2) {
            return nums;
        } 
        
        vector<int>even;
        vector<int>odd;
        
        for(int i=0; i<nums.size(); i++) {
            if(i&1) {
                odd.push_back(nums[i]);
            }else {
                even.push_back(nums[i]);
            }
        }
        
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());
        
        int i = 0, j = 0;
        
        while( i < even.size() || j < odd.size()) {
            if (i < even.size()) {
                nums[i+j]=even[i];
                ++i;
            }
            if (j < odd.size()) {
                nums[i+j]=odd[j];
                ++j;
            }
        }
        return nums;
    }
};
