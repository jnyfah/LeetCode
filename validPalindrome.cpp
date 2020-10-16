class Solution {
  public:
    bool isPalindrome(std::string s) {
      std::string result = "";
      for (int i = 0; i < s.length(); i++) {
        if (std::isalpha(s[i]) || std::isdigit(s[i])) {
          result += std::tolower(s[i]);
        }
      }
      return (result == std::string(result.rbegin(), result.rend()));
    }
};
