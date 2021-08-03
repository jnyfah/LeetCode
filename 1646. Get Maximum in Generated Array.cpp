class Solution {
public:
    int getMaximumGenerated(int n) {
        std::vector<int>generated(n+1);
        int maxi = 1;
        
        if(n<2) {
            return n;
        }
        
        generated[0] = 0;
        generated[1] = 1;
        
        for(int i = 2; i<n+1; i++) {
            if(i%2 == 0) {
                generated[i] = generated[i/2];
            }else {
                generated[i] = generated[i/2] + generated[i/2 + 1];
            }
            
            maxi = std::max(maxi, generated[i]);
            
        }
        return maxi;
    }
};
