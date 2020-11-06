class Solution {
public:
    bool isPowerOfThree(int n) {
        bool status;
    if(n==1){
        return true;
    } if(n==0){
        return false;
    }

    while ((n!=1)){
        if(n%3 != 0){
            status = false;
            break;
        }else{
            n/=3;
            status = true;
        }
    }
       
        return status;
    }
};
