class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i =0, j=0;
       while (i < nums.size()){
         if(nums[i] == 0){
           nums.erase(nums.begin() + i);
           j++;
         }else{
           i++;
         }
       }
        for (int k =0; k<j; k++){
            nums.push_back(0);
        }
    }
};
