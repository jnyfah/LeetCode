class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(int i =0; i<ransomNote.length(); i++) {
           auto found = magazine.find(ransomNote[i]);

           if(found < magazine.length()){
                magazine.erase(magazine.begin() + found);
            }else{
                return false;
            }
        }

        return true;
    }
};
