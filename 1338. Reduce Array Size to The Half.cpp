class Solution {
public:
    int minSetSize(vector<int>& arr) {
        std::unordered_map<int,int>amap;
        std::vector<int>vec;
        int res = 0, siz = 0;
        
        for(auto x :arr) {
            amap[x]++;
        }
        
        for(auto[a,b] : amap){
            vec.push_back(b);
        }
        std::sort(vec.begin(), vec.end(), std::greater<int>());
        for(int i = 0; i<vec.size() && siz*2 < arr.size(); ++i) {
            res++;
            siz += vec[i];
        }
        return res;
    }
};
