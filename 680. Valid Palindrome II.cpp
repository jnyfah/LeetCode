class Solution {
public:
    bool validPalindrome(string s) {
        int right = s.size()-1;
        int left = 0;
        
        while(left < right) {
            if(s[left] != s[right]) {
                return ispalindrome(s, left+1, right) || ispalindrome(s, left, right-1);
            }
            right--;
            left++;
        }
        return true;
    }
    
    bool ispalindrome(string s, int left, int right) {
        while(left < right) {
            if(s[left] != s[right]) {
                return false;
            }
            right--;
            left++;
        }
        return true;
    }
};
