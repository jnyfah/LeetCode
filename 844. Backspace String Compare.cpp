class Solution {
public:
    bool backspaceCompare(string S, string T) {
        bool flag =true;
        std::stack<char>s_stack;
        std::stack<char>t_stack;
        for(int i=0; i<S.length(); i++) {
          if(S[i] == '#'){
            if(s_stack.empty()){
              continue;
            }else{
              s_stack.pop();
            }
          }else
          {
            s_stack.push(S[i]);
          }    
        }
         for(int i=0; i<T.length(); i++) {
          if(T[i] == '#'){
            if(t_stack.empty()){
              continue;
            }else{
              t_stack.pop();
            }
          }else
          {
            t_stack.push(T[i]);
          }  
        }

        if(s_stack.size() != t_stack.size()){
          return false;
        }
        while(!s_stack.empty()){
          if(s_stack.top() == t_stack.top()){
            s_stack.pop();
            t_stack.pop();
          }else {
            flag =false;
            break;
          }
          
        }
        
    return flag;
    }
};
