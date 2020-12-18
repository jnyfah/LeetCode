class Solution {
public:
    int countPrimes(int n) {
        if(n<2){
            return 0;
        }
        
        int count =0;
        vector<bool>isprime(n+1, true);
        isprime[0]=isprime[1]=0;
        
        for(int i =2; i<n; i++){
            if(isprime[i]){
                count++;
            }
            
            for(int j =i*2; j<n; j+=i){
                isprime[j]=false;
            }
        }
        return count;
    }
};
