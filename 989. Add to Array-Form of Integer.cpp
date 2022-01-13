class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
      vector<int>res;
        
     int i = num.size()-1, carry =0;
     while(i>= 0 || k != 0 || carry > 0) {
         int sum= 0;
         if(k != 0) {
             sum += k%10;
             k = k/10;
         }
         if(i>= 0){
             sum += num[i];
             i--;
         }
         sum += carry;
         carry = sum/10;
         res.push_back(sum%10);
     }
        reverse(res.begin(), res.end());
        return res;
    }
};
