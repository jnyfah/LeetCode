class Solution {
public:
     long long int ar[38] = {-1};         //store the repeated value
 int tribonacci(int n) {
    if(n <= 0)
        return 0;
 if(n == 1 || n == 2)
        return 1;
   
    if(ar[n] != 0)
        return ar[n];
    
    ar[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);      //call the recursion to bought nth tribonaci & stire in array
    
    return ar[n];
 }
};
