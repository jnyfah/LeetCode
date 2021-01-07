class Solution {
public:
    bool isValid(string s) {
      std::stack<char>m_stack;

 for (char str: s) {
   if(str == '(' || str == '{' || str == '[' || m_stack.empty()) {

     m_stack.push(str);

    } else {

     if( (str == ')' && m_stack.top() != '(') || (str == ']' && m_stack.top() != '[')          ||(str == '}' && m_stack.top() != '{')) {

       return false;
     }
       
      m_stack.pop();
       
     }
     
   }
   return m_stack.empty();  
    }
};
