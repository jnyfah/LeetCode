class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        std::map<int, int>mp;
        std::vector<int>v;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto m:mp){
            if(m.second == 1){
                v.push_back(m.first);
        
            }
        }
        return v;
    }
};
