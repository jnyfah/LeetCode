class Solution {
public:
    bool isCapital(char x){
        return(x>='A' && x<='Z')?true:false;
    }
    bool detectCapitalUse(string s) {
        if(!isCapital(s[0])){
            for(int i=1;i<s.length();i++){
                if(isCapital(s[i])){
                    return false;
                }
            }    
        }else{
            for(int i=1;i<s.length()-1;i++){
                if((isCapital(s[i]) && !isCapital(s[i+1])) ||((!isCapital(s[i]) && isCapital(s[i+1])))){
                    return false;
                }
            }
        }
        return true;    
    }
};
