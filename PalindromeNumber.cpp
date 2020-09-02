class Solution {
public:
    
      bool isPalindrome(int x) {
    if(x>=2147483647 || x<=-2147483648)
         {
             return false;
         }
    int y=x,i=0;
    while(x>0)
    {
    i=i*10+x%10;
    x=x/10;    
    }
    return(i==y?true:false);
    }
    
};
