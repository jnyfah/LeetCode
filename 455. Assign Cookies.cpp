class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int content = 0;
        int i = 0, j = 0;
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        while((i < g.size()) && (j < s.size())) {
            if(s[j] >= g[i]) {
                content++, i++, j++;
            } else{
                j++;
            }
        
        }
        return content;
    }
};
