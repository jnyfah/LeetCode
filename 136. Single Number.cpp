class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::set<int>st;
        int result;
        for(int i =0; i<nums.size(); i++){
            auto check = st.insert(nums[i]);
            if(!check.second){
                st.erase(st.find(nums[i]));
            }
        }
      for(auto x :st){
          result =x;
      }
     return result;
    }
};
