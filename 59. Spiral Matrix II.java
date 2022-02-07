class Solution {
    public int[][] generateMatrix(int n) {
        int[][] matrix = new int[n][n];
        int col_start = 0, col_end = n - 1;
        int row_start = 0, row_end = n - 1;
        int element = 1;
        while(col_start <= col_end && row_start <= row_end) {
            //top
            for(int j = col_start; j <= col_end; j++) {
                matrix[row_start][j] = element++;
            }
            
            // right side
            for(int i = row_start + 1; i <= row_end; i++) {
                matrix[i][col_end] = element++;
            }
            
            //bottom side
            for(int j = col_end - 1; j >= col_start; j--) {
                matrix[row_end][j] = element++;
            }
            
            //left side
            for(int i = row_end - 1; i > row_start; i--) {
                matrix[i][col_start] = element++;
            }
            
            col_start++;
            col_end--;
            row_start++;
            row_end--;
        }
        return matrix;
    }
}
