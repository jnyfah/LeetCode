class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 2) {
            return nums.size();
        }
        
        for(auto it = nums.begin()+1; it!=nums.end()-1;) {
            if(*it == *(it+1) && *it == *(it-1)) {
                it = nums.erase(it);
            }else{
                it++;
            }
        }
        return nums.size();
    }
};
