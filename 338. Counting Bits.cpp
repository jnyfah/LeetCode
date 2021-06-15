class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num+1);
        int powerOf2 = 1;
        for ( int i = 1; i <= num; i++ )
        {
            if ( i == 2*powerOf2 )
                powerOf2 *= 2;
            dp[i] = dp[i-powerOf2] + 1;
        }
        return dp;
    }
};
