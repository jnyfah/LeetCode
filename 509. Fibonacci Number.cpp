class Solution {
public:
    
  
    int fib(int n) {
        std::vector<int>fibs(n+1);
        
        if(n == 0 || n ==1){
            return n;
        }
        
        fibs[0] = 0;
        fibs[1] = 1;
        
        for(int i = 2; i < n+1; i ++) {
            fibs[i] = fibs[i-1] + fibs[i-2];
        }
        
        return fibs[n];
    }
};
