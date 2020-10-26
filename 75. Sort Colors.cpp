class Solution {
public:

template<class RandomIt, class Compare = std::less<>>
void heap_sort(RandomIt first, RandomIt last, Compare cmp = Compare{})
{
    std::make_heap(first, last, cmp); // assert(std::is_heap(first, last, cmp));
    std::sort_heap(first, last, cmp); // assert(std::is_sorted(first, last, cmp));
}
    void sortColors(vector<int>& nums) {
       heap_sort(nums.begin(), nums.end()); 
    }
};
