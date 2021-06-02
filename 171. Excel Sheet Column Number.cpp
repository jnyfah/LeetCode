class Solution {
public:
    int titleToNumber(string columnTitle) {
    int num = 0;
        for(int i = 0; i < columnTitle.length(); i++){
            num *= 26;
            num += columnTitle[i] - 'A' + 1;
        }
        return num;
    }
};
