class Solution {
public:
    bool isPalindrome(std::string s, int start, int end) {
      std::string str = s.substr(start, (end-start)+1);

      return (str == std::string(str.rbegin(), str.rend()));
    }
    bool validPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        
        while (start <= end) {
            if (s[start] != s[end]) {
                return isPalindrome(s, start+1, end) || isPalindrome(s, start,end-1);
            } else {
                start++;
                end--;
            }
        }
        return true;
    }
};
