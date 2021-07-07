class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
    std::vector<int>mat;
        for(int i = 0; i<matrix.size(); i++) {
            for(int j = 0; j<matrix[i].size(); j++){
                mat.push_back(matrix[i][j]);
            }
        }
        
        std::sort(mat.begin(), mat.end());
        
     return mat[k-1];
    }
};
