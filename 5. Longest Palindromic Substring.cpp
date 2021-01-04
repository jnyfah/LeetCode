class Solution {
public:
    string longestPalindrome(string s) {
         std::string result = "";

  //odd
  for(int i = 0; i<s.length(); i++) {
    for(int j = 0; i+j < s.length() && i-j>=0; j++){
      if(s[i+j] != s[i-j]){
        break;
      }else{
        int len = (2*j)+1;
        if(result.length() < len){
         result = s.substr((i-j), len);
        }
      }
    }
  }

  for(int i = 0; i<s.length(); i++) {
    for(int j = 0; i+j+1 < s.length() && i-j>=0; j++){
      if(s[i+j+1] != s[i-j]){
        break;
      }else{
        int len = (2*j)+2;
        if(result.length() < len){
         result = s.substr((i-j), len);
        }
      }
    }
  }
  return result;

        
    }
};
