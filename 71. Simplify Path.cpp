class Solution {
public:
    string simplifyPath(string s) {
if(s.length()<2)
  return s;
int i=0,j=s.length();
vector<string>v;
while(i<j){
  string tmp="";
  while(i<j and s[i]!='/'){
    tmp.push_back(s[i]);
    ++i;
  }
  if(!tmp.empty() and tmp==".")
    continue;
  if(tmp.length()>1 and tmp==".."){
    if(!v.empty())
      v.pop_back();
  }
  else if(!tmp.empty())
    v.push_back(tmp);
  ++i;
}
s="";
for(auto i:v){
  s.push_back('/');
  s.append(i);
}
return s.empty()?"/":s;
    }
};
