class Solution {
public:
 string reverseStr(string s, int k) {
     int count = 0;
     std::string str, result;
     if(k > s.length()){
        return string(s.rbegin(), s.rend());
     }
     while(count <= s.length()) {
        str = s.substr(count, k);
        result += string(str.rbegin(), str.rend());
        count +=k;
        if(count + k > s.length()){
           if(count == s.length()) {
              break;
           }else{
              str = s.substr(count, s.length()-count);
              result += string(str.begin(), str.end());
              break;
           }
        }

        str = s.substr(count, k);
        result += string(str.begin(), str.end());
        count +=k;

        if(count + k > s.length()){
           if(count == s.length()) {
              break;
           }else{
              str = s.substr(count, s.length()-count);
              result += string(str.rbegin(), str.rend());
              break;
           }
        }

     }
     return result;
    }
};
