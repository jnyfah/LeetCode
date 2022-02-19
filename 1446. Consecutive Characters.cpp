class Solution {
public:
    int maxPower(string s) {
        int n = 0, powi = 0;
        while(n < s.size()) {
            int pow = 0;
            
            char str = s[n];
            while(s[n] == str) {
                pow++;
                n++;
            }
            powi = max (pow, powi);
        }
        return powi;
    }
};
