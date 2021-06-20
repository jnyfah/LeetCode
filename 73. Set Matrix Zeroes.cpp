class Solution {
public:
    
    
    void setZeroes(vector<vector<int>>& matrix) {
        std::vector<int> rows(matrix.size(),1), cols(matrix[0].size(),1);
        
        for(int i = 0; i<matrix.size(); i++) {
            for(int j = 0; j<matrix[i].size(); j++) {
                if(matrix[i][j] == 0) {
                    rows[i] = 0;
                    cols[j] = 0;
                }
            }
        }
        
       for(int i = 0; i<matrix.size(); i++) {
            for(int j = 0; j<matrix[i].size(); j++) {
                if(rows[i] == 0 || cols[j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
    
   
};
