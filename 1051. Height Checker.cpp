class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>exp = heights;
        std::sort(exp.begin(), exp.end());
        int res = 0;
         
        for(int i = 0;  i<heights.size(); i++) {
            if(exp[i] != heights[i]) {
                res++;
            }
        }
        return res;
    }
};
