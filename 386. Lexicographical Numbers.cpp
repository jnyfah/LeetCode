class Solution {
public:
    static bool comp(int a, int b){
        return std::to_string(a) <std::to_string(b);
    }
    vector<int> lexicalOrder(int n) {
        std::vector<int>result(n);
        
        std::iota(result.begin(), result.end(), 1);
        std::sort(result.begin(), result.end(), comp);
        
        return result;
    }
};
