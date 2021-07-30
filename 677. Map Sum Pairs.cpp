class MapSum {
public:
    /** Initialize your data structure here. */
    std::map<std::string, int>mp;
    
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        mp[key] = val;
    }
    
    int sum(string prefix) {
        int ans = 0;
        for(auto i = mp.begin(); i != mp.end(); i++) {
            if(i->first.find(prefix) == 0) {
                ans += i->second;
            }
        }
        return ans;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
