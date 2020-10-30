class Solution {
public:
    int calPoints(vector<string>& ops) {
        std::stack<int>st;
     int result =0;
     for(int i=0; i<ops.size(); i++){
       if(ops[i] == "C"){
         st.pop();
       }else if(ops[i] == "D") {
         int x = st.top();
         x *=2;
         st.push(x);
       }else if(ops[i] == "+") {
         int x = st.top();
         st.pop();
         int y = st.top();
         st.push(x);
         y+=x;
         st.push(y);

       }else{
         st.push(std::stoi(ops[i]));
       }
     }  
     while(!st.empty()) {
       result +=st.top();
       st.pop();
     }
     return result;
    }
};
