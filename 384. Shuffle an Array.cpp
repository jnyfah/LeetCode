class Solution {
public:
    vector<int> nums;
    
    Solution(vector<int>& nums) {
        this->nums = nums;
    }
    
    vector<int> reset() {
        return nums;
    }
    
    vector<int> shuffle() {
       vector<int> shuf (nums);
        for (int i =0; i<shuf.size(); i++) {
            int r = rand()%(i+1);
            std::swap(shuf[i], shuf[r]);
        }
        return shuf;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
