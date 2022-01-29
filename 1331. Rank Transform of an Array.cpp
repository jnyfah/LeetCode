class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>res(arr);
        
        unordered_map<int,int>mp;
        
        sort(res.begin(), res.end());
        
        int count = 1;
        
        for(auto num : res) {
            if(mp.find(num) == mp.end()) {
                mp[num] = count++;
            }
        }
        
        for(int i = 0; i<arr.size(); i++) {
            res[i] = mp[arr[i]];
        }
        
        return res;
    }
};
