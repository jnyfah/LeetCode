class Solution {
public:
    int minOperations(vector<string>& logs) {
        int result = 0;
        for(int i = 0; i<logs.size(); i++) {
          if(logs[i] == "../"){
            if(result == 0){
              continue;
            }else
            {
              result--;
            }
          }else if(logs[i] =="./" ){
            continue;
          }else{
            result ++;
          }
        }
        if(result < 0){
          return 0;
        }
        return result;
    }
};
