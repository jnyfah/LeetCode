class Solution {
public:
    bool divisorGame(int n) {
        std::vector<bool> dp(n+1, false);
        
        for(int i = 2 ; i<n+1; i++) {
            for(int j = 1; j*j<i+1; j++) {
                if((i%j == 0) && !dp[i-j]) {
                    dp[i] = true;
                }
            }
        }
        return dp[n];
    }
};
