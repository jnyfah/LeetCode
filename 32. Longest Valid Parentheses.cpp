class Solution {
public:
   int longestValidParentheses(string s) {
        
       int count = 0;
       std::stack<int>m_stack;
       
       m_stack.push(-1);
       
       for(int i =0; i<s.length(); i++){
           if(s[i] == '(') {
               m_stack.push(i);
           }else{
               m_stack.pop();
               if(m_stack.empty()) {
                   m_stack.push(i);
               }else{
                   count = std::max(count, i-m_stack.top());
               }
           }
       }
       return count;
    }
};
