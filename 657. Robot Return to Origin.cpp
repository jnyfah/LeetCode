class Solution {
public:
 bool judgeCircle(string moves) {
     std::map<char, int>mp;
     mp['R'] = 0;
     mp['L'] = 0;
     mp['U'] = 0;
     mp['D'] = 0;

     for(int i = 0; i< moves.length(); i++) {
        auto search = mp.find(moves[i]);
        if(search != mp.end()) {
         ++ search->second;
       }
     }

     return ((mp['R'] == mp['L']) && (mp['D'] == mp['U']));
    }
};
