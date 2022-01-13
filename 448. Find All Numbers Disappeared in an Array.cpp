class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> res;
        
        for(int i = 1; i<=nums.size(); i++) {
            mp[i] = 0;
        }
        
        for(auto x: nums) {
            mp[x]++;
        }
        
        for(auto x: mp) {
            if (x.second == 0) {
                res.push_back(x.first);
            }
        }
        return res;
    }
};
