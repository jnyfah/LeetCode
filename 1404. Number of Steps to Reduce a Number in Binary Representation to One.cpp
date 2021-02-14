 int numSteps(std::string s) {
        int step =0, i;
        while(s != "1") {
            if(s=="0"){
                return ++step;
            }
           if(s.back() == '0'){
              s.pop_back();
              step++;
            }else{
                s[s.size()-1] = '0';

                for(i = s.size()-2; i>=0; i--){
                    if(s[i] == '0')
                    break;
                }
                if(i > 0){
                   s[i] == '1';
                   for(i = i+1; i< s.size(); i++) {
                       s[i] = '0';
                   }
                   step++;
                }else{
                   s.insert(0,"1");
                  for(i = i+1; i< s.size(); i++) {
                       s[i] = '0';
                   }
                   step++; 
             }
           }
        }
        return step;
        
    }
