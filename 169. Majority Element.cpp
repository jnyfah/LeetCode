class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
       
        auto x = std::max_element(mp.begin(), mp.end(),
    [](const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.second < p2.second; });
        return x->first;
    }
};
