class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        if (matrix.empty() || matrix[0].empty())
            return false;
        
        int rowLength = matrix.size();
        int columnLength = matrix[0].size();
        
        int row = 0;
        
        cout << "rowLength: "    << rowLength    << endl;
        cout << "columnLength: " << columnLength << endl;
        
        int rowStart = 0, rowMid = 0, rowEnd = rowLength-1;
        
        while (rowStart <= rowEnd) {
            
            rowMid = rowStart + (rowEnd - rowStart) / 2;
            
            if (matrix[rowMid][0] == target){
                return true;
            }
            else if (matrix[rowMid][0] < target){
                
                if (matrix[rowMid][columnLength-1] >= target) {
                    row = rowMid;
                    break;
                }
                else {
                    rowStart = rowMid + 1;
                }
            }
            else if (matrix[rowMid][0] > target){
                if ( (rowMid - 1 >= 0) && matrix[rowMid-1][0] <= target) {
                    row = rowMid-1;
                    break;
                }
                else {
                    rowEnd = rowMid-1;
                }
            }
            
        }
        
        int columnStart = 0, columnMid = 0, columnEnd = columnLength-1;
        while (columnStart <= columnEnd) {
            
            columnMid = columnStart + (columnEnd - columnStart) / 2;
            
            if (matrix[row][columnMid] == target) {
                return true;
            }
            else if (matrix[row][columnMid] < target) {
                columnStart = columnMid+1;
            }
            else if (matrix[row][columnMid] > target) {
                columnEnd = columnMid-1; 
            }
        }
        
        return false;
    }
};
