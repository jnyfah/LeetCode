class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size() < 2) return false;
        
        unordered_map<int, int> mp;
        mp[0]=-1;
        
        int runningSum=0;
        
        for(int i=0;i<nums.size();i++) {
            runningSum+=nums[i];
            
            if(k!=0) 
                runningSum = runningSum%k;
            
            //check if the runningsum already exists in the hashmap
            if(mp.find(runningSum)!=mp.end()) {
                //if it exists, then the current location minus the previous location must be greater than1
                
                if(i-mp[runningSum]>1)
                    return true;
            }
            else {
                //otherwise if the current runningSum doesn't exist in the hashmap, then store it as it maybe used later on
                
                mp[runningSum]=i;
            }
                    
        }
        
        return false;
    }
};
