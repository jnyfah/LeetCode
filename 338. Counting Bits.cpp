class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        res.push_back(0);
        
        for(int i =1; i<= n; i++) {
            int temp = res[i/2] + (i%2);
            res.push_back(temp);
        }
        return res;
    }
};
