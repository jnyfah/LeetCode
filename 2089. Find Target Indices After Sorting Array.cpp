class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        vector<int>res;
            
        int i = lower(nums, target);
        int j = lower(nums, target+1);
        if (i < nums.size() && nums[i] == target) {
           for(int k = i; k < j; k++) {
               res.push_back(k);
           } 
        }
        return res;
    }
    
    
    int lower(vector<int> nums, int target) {
        int left =0, right = nums.size()-1;
        
        while(left <= right) {
            int mid = left + (right-left)/2;
            
            if(nums[mid] < target) left = mid +1;
            else right = mid-1;
        }
        
        return left;
    }
};
