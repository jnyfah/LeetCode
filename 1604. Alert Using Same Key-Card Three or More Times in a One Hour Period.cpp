class Solution {
public:
   
    vector<string> alertNames(vector<string>& keyName, vector<string>& keyTime) {
       map<string, vector<int>> mp;
        
        set<string>st;
         for (int i = 0; i < keyName.size(); i++) {
            // Converting time to minutes only
            mp[keyName[i]].push_back(stoi(keyTime[i].substr(0,2)) * 60 + stoi(keyTime[i].substr(3)));
        }
            for(auto str:mp){
               std::sort(str.second.begin(), str.second.end());
               for(int i =2; i<str.second.size(); i++){
                   if((str.second[i] - str.second[i-2]) <= 60){
                       st.insert(str.first);
                   }
               }
            }
          vector<string>result(st.begin(), st.end());
           return result;
    }
};
