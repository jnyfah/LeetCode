class Solution {
public:
    vector<vector<int> >vec;
    
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums, 0, nums.size()-1);
        return vec;
        
    }
    
    void solve(vector<int> nums, int start, int end) {
        if(start == end) {
            vec.push_back(nums);
            return;
        }
        
        for(int i = start; i<=end; i++) {
            swap(nums[start], nums[i]);
            solve(nums, start+1, end);
            swap(nums[start], nums[i]);
        }
    }
};
