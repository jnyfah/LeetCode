class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        
        for(auto num : nums) {
            if(num < pivot) {
                ans.push_back(num);
            }
        }
        
        for(auto num : nums) {
            if(num == pivot) {
                ans.push_back(num);
            }
        }
        
        for(auto num : nums) {
            if(num > pivot) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};
