class Solution {
public:
    string reverseWords(string s) {
        istringstream data(s);
        std::string result;
        
        while(data){
           string token;
           data >>token;
           result += string(token.rbegin(), token.rend());
           result +=" ";
        }
        result = std::regex_replace(result, std::regex(" +$"), "");
        return result;
    }
};
