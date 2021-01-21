class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
	map<int,int> m;
	pair<int,string> minimum = {INT_MAX,""};
	for(auto &c:licensePlate)
	  if(isalpha(c)) m[tolower(c)]++;
	for(auto &w:words){
	  bool suc=1;
	  for(auto &[key,value]:m)
		if(suc && count(w.begin(),w.end(),key)<value) suc=0;
	  if(suc)
		if(w.size() < minimum.first)  minimum = {w.size(),w};
	}
	return minimum.second;
}
};
