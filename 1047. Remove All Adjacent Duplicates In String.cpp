class Solution {
public:
    string removeDuplicates(string S) {
        std::stack<char>st;
        string result ="";
        for(int i=0; i<S.length(); i++) {
          if(!st.empty()) {
              if(st.top() == S[i]){
            st.pop();
          }else{
            st.push(S[i]);
          }
          }else{
            st.push(S[i]);
          }
          
        }
        while(!st.empty()){
          result += st.top();
          st.pop();
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};
