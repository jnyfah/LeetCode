class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n=nums.size();
      return abs(accumulate(nums.begin(),nums.end(),0)-(n*(n+1)/2));
    }
};
