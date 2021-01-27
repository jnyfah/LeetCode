class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         vector<int> res;
        int length = digits.size();
        int carry = 1;
        int temp;
        for(int i = length - 1; i >= 0; --i)
        {
            temp = digits[i] + carry;
            carry = temp > 9 ? 1 : 0;
            temp %= 10;
            res.push_back(temp);
        }
        if(1 == carry)
        {
            res.push_back(carry);
        }
        reverse(res.begin(), res.end());
        return res;
        
    }
};
