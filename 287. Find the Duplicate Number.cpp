class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        std::set<int>st;
        for(int i=0; i<nums.size(); i++){
            if(!st.insert(nums[i]).second){
                return nums[i];
            }
        }
        return 0;
    }
};
