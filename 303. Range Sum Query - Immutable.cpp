class NumArray {
public:
    vector<int>data ;
    
    NumArray(vector<int>& nums) {
        data = nums;
    }
    
    int sumRange(int left, int right) {
         int sum =0;
        for(int i = left; i < right+1; i++) {
            sum += data[i];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
