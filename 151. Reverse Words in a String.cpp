class Solution {
public:
string reverseWords(string s) {
   istringstream data(s);
   std::string result;
   int i = 0;
   std::vector<std::string>v;
   while(data){
      std::string token;
      data>>token;
      v.push_back(token);
   }  
   std::reverse(v.begin(), v.end());
   for(auto str : v){
      result += str;
      result +=" ";
   } 
   result= std::regex_replace(result, std::regex("^ +| +$|( ) +"), "$1");
   return result;
    }
};
