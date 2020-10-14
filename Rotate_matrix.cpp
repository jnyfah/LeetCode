class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        const size_t n = matrix.size();
        for(size_t i = 0; i < n/2; ++i) {
            size_t l = i;
            size_t r = n - 1 - i;
            for(size_t j = l; j < r; ++j) {
                // Four swaps
                int t = matrix[i][j];
                swap(matrix[j][n-1-i], t);
                swap(matrix[n-1-i][n-1-j], t);
                swap(matrix[n-1-j][i], t);
                swap(matrix[i][j], t);
            }
        }
    }
};
