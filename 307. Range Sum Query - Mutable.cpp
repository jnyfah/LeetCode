class NumArray {
public:
    std::vector<int>tree;
    int n;
        
    NumArray(vector<int>& nums) {
        tree.resize(nums.size()*2);
        buildtree(nums);
        n = nums.size();
    }
    
    void buildtree (vector<int> nums) {
        for(int i = nums.size(), j =0; i<nums.size()*2; i++, j++) {
            tree[i] = nums[j];
        }
        
        for(int i = nums.size() -1; i>0; i--) {
            tree[i] = tree[i*2] + tree[i*2+1];
        }
    }
    
    void update(int index, int val) {
          index += n;
    tree[index ] = val;
    while (index  > 0) {
        int left =index ;
        int right =index ;
        if (index  % 2 == 0) {
            right = index  + 1;
        } else {
            left = index  - 1;
        }
        // parent is updated after child is updated
        tree [index  / 2] = tree[left] + tree[right];
       index  /= 2;
    }
    }
    
    int sumRange(int l, int r) {
         l += n;
    // get leaf with value 'r'
    r += n;
    int sum = 0;
    while (l <= r) {
        if ((l % 2) == 1) {
           sum += tree[l];
           l++;
        }
        if ((r % 2) == 0) {
           sum += tree[r];
           r--;
        }
        l /= 2;
        r /= 2;
    }
    return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
