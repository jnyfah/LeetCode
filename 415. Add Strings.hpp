class Solution {
public:
    string addStrings(string num1, string num2) {
        
    int i = num1.length()-1, j = num2.length()-1, carry =0;
    std::string result="";
        while((i>= 0) || (j>=0) || carry) {
            long temp = 0;
        if(i >= 0) { 
           temp += (num1[i] - '0');
           i--;
        }

        if(j >= 0) { 
           temp += (num2[j] - '0');
           j--;
        }

      temp += carry;
       carry = temp/10;
       temp= temp%10;

       result += temp + '0';
        }
        std::reverse(result.begin(), result.end());
        return result;
        
    }
};
