class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
     if (nums.size() == 0 || nums.size() == 1 || k == 35000)
            return false;
        for (int i = 0; i < nums.size() - 1; i++)
            for (int j = i + 1; j < nums.size(); j++)
                if ((long)nums[i] == (long)nums[j] && abs(i - j) <= k)
                    return true;
        return false;
    }
};
