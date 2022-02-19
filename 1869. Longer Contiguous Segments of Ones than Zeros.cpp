class Solution {
public:
    bool checkZeroOnes(string s) {
        int m_one = 0; int m_zero = 0;
        
        int n = 0;
        
        while( n < s.size()) {
            int one = 0; int zero = 0;
            
            if(s[n] == '0') {
                while(s[n] == '0') {
                    zero++;
                    n++;
                }
            }
            if(s[n] == '1') {
                while(s[n] == '1') {
                    one++;
                    n++;
                }
            }
            m_one = max(m_one, one);
            m_zero = max(m_zero, zero);
            
        }
        
     return (m_one > m_zero);
    }
};
