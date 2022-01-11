class Solution {
public:
    bool isOneEditDistance(string s, string t) {
       int diff = s.size()-t.size();
       diff = diff>0? diff : -diff;
       
       if (s == t || diff > 1) return false;
       
       int i=0; 
       int j=0; 
       
       bool diffFound = false;
       while (i<s.size() && j<t.size()) {
           if (s[i] != t[j]) {
               if (diffFound) return false;
               
               if (s.size() >= t.size()) i++;
               if (s.size() <= t.size()) j++;
               diffFound = true;
           } else {
               i++;
               j++;
           }
       }
       
       return true;
    }
};
