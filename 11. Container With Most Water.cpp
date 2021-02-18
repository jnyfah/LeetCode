class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = 0;
        int left = height.size()-1;
        int maxi = 0;

        while(right<left){
            maxi = std::max(maxi, std::min(height[right], height[left]) * (left-right));
            if(height[right] > height[left]) {
                
                left --;
            } else {
                
                right ++;
            }
        }
        return maxi;
    }
};
