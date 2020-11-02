class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      std::vector<bool>v;
        int max =*std::max_element(candies.begin(), candies.end());
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies >= max){
                v.push_back(true);
            }else{
                v.push_back(false);
            }
        }
        return v;
    }
};
