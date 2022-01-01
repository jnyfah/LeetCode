class Solution {
public:
    vector<vector<int> >vec;
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        solve(nums, 0, nums.size()-1);
        return vec;
    }
    
    void solve(vector<int> nums, int start, int end) {
        if(start == end) {
            vec.push_back(nums);
            return;
        }
        
        for(int i = start; i<=end; i++) {
            if (start != i && nums[start] == nums[i]) continue;
            swap(nums[start], nums[i]);
            solve(nums, start+1, end);
        }
    }
};

