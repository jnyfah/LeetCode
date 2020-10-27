class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        std::vector<int>intersect;
        
        std::set_intersection(nums1.begin(), nums1.end(),
                              nums2.begin(), nums2.end(),
                              std::inserter(intersect, intersect.begin()));
        return intersect;
    }
};
