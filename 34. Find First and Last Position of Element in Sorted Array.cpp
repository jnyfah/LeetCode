class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int index1 = lower(nums, target);
        int index2 = lower(nums, target+1)-1;
        
        if(index1 < nums.size() && nums[index1] == target) 
            return {index1, index2};
        
        return {-1,-1};
    }
    
    
    int lower(vector<int> nums, int target) {
        int left = 0, right = nums.size()-1;
        
        while(left <= right) {
            int mid = left + (right-left)/2;
                
            if(nums[mid] < target) {
                left = mid+1;
            }else {
                right = mid-1;
            }
        }
        return left;
        
    }
};
