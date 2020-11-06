class Solution {
public:
   bool isPowerOfTwo(int n) {
    bool status;
    if(n==1){
        return true;
    } if(n<=0){
        return false;
    }

    while ((n!=1)){
        if(n%2 != 0){
            status = false;
            break;
        }else{
            n/=2;
            status = true;
        }
    }
       
        return status;
    }
};
