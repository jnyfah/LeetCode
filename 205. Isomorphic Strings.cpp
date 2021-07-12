class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // if(s.size()!=t.size())
        //     return false;
       
unordered_map<char,char>mp;
set<char>st;
for(int i=0;i<s.size();i++)
{
    
    if(mp.find(s[i])!=mp.end()){
        if(mp[s[i]]!=t[i])
        return false;
    }
    else{
        if(st.count(t[i])>0)
        return false;
        mp[s[i]] = t[i];
        st.insert(t[i]);
        

    }
}
        return true;
        
        
    }
};
