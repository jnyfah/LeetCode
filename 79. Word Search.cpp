class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i<board.size(); i++) {
            for(int j = 0; j<board[0].size(); j++) {
                if(DFS(board, i, j, word)) {
                    return true;
                }
            }
        }
        return false;
    }
    
    bool DFS(vector<vector<char>>& board, int i, int j, string& word) {
        if (!word.size())
            return true;
        if(i<0|| i >= board.size() || j >= board[0].size() || j < 0|| board[i][j] != word[0]) {
            return false;
        }
        
        char c = board[i][j];
        board[i][j] = '*';
        string s = word.substr(1);
        bool res = (DFS(board, i+1, j, s) || DFS(board, i, j+1, s) || DFS(board, i-1, j, s) ||DFS(board, i, j-1, s) );
        board[i][j] = c;
        
        return res;
    }
};
