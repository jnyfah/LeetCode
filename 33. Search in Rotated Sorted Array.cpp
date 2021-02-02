class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int right = n-1;
        int left = 0;
        int mid;
        
        while(left <= right) {
            mid = (left+right)/2;
            
            if(nums[mid] == target) {
                return mid;
            } else if(nums[mid] >= nums[left]) {
                if(target >= nums[left] && target <= nums[mid]) {
                    right = mid-1;
                }else{
                    left = mid+1;
                }
            } else {
                if(target <= nums[right] && target >= nums[mid]) {
                    left = mid+1;
                }else{
                    right = mid-1;
                } 
            }
        }
        return -1;
    }
};
