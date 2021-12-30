class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        vector<int>x;
        
        for(int i = 0; i< nums.size(); i++) {
            int comp = target - nums[i];
            
            if(mp.find(comp) != mp.end()) {
                x.push_back(mp[comp]);
                x.push_back(i);
                return x;
            }else {
                mp[nums[i]] = i;
            }
        }
        return x;
    }
};
