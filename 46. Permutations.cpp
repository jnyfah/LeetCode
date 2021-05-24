class Solution {
public:
    void swap(vector<int> &nums, int i, int j){   //i and j are the positions of elements to be swapped
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    
    void permute(std::vector<int>nums, int left, int right, vector<vector<int>> &ans){
        if(left == right ){
            ans.push_back(nums);
        }
        for(int i = left; i<= right; i++) {
            
            swap(nums, i, left);
            permute(nums, left+1, right, ans);
            swap(nums, i, left);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permute(nums, 0, nums.size()-1, ans);
        return ans;
        
    }
};
