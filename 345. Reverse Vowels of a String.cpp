class Solution {
public:
    string reverseVowels(string s) {
        std::set<char> m_set{'a','e','i','o','u', 'A', 'E','I','O','U'};  
     std::vector<char>result;
     std::vector<int>index;

     for(int i = 0; i<s.length(); i++) {
       if(m_set.find(s[i]) != m_set.end()){
         result.push_back(s[i]);
         index.push_back(i);
       }
     }

     std::reverse(result.begin(), result.end());
     for(int i = 0; i<result.size(); i++){
       s[index[i]] =result[i];
     }
     return s;
    }
};
