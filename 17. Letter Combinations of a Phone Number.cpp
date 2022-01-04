class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits=="")
            return {};
        vector<string>res;
        string str = "";
        solve(digits, str, res);
        return res;
    }
    
    
    void solve(string digits, string str, vector<string>&res) {
        vector<string> v={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        if(digits.size() == 0) {
            res.push_back(str);
            return;
        }
        
        string s = v[digits[0] - '0'];
        digits.erase(digits.begin());
        
        for(int i = 0; i<s.size(); i++) {
            solve(digits, str+s[i], res);
        }
    }
};
