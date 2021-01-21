class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        std::unordered_map<char, int>m_map;
        int count =0;
        
        for(int i=0; i<stones.length(); i++){
            m_map[stones[i]]++;
        }
        
        for(int i=0; i<jewels.size(); i++) {
            
            if(m_map.find(jewels[i]) != m_map.end()){
            count += m_map.find(jewels[i])->second ;
            }else{
                count +=0;
            }
        }
        
        return count;
    }
};
