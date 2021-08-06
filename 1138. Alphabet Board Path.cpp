class Solution {
public:
    string alphabetBoardPath(string target) {
         vector<vector<int>> dp = {
            {0,1,2,3,4},
            {5,6,7,8,9},
            {10,11,12,13,14},
            {15,16,17,18,19},
            {20,21,22,23,24},
            {25}
        };
        
        int i = 0, j = 0;
        std::string res;
        int asci;
        
        for(int k = 0; k<target.size(); k++) {
            asci = target[k] - 'a';
            
            while(dp[i][j] != asci) {
                
                if(asci == 25 && dp[i][j]>20) {
                    res += 'L';
                    j--;
                } else if(asci > dp[i][j]) {
                    if(asci > dp[i][4]) {
                        res += 'D';
                        i++;
                    }else {
                        res += 'R';
                        j++;
                    }
                } else{
                    if(asci < dp[i][0]) {
                        res += 'U';
                        i--;
                    } else {
                        res += 'L';
                        j--;
                    }
                } 
            }
            res += '!';
        }
        return res;
    }
};
