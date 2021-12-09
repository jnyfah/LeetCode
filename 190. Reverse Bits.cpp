class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        int j = 31;
        
        for(int i = 32; i>0; i--) {
            int rem = n%2;
            if(rem > 0) {
               res += std::pow(2, j); 
            }
            j--;
            n>>=1;
        }
        return res;
    }
};
