class Solution {
public:
   string toHex(int num) {

        if(num == 0){

            return "0";

        }

        unsigned int num1 = num; // takes care of negative integers automatically

        string hex = "";

        int base = 16;

        int rem;

        while(num1 > 0){

            rem = num1 % base;

            if(rem < 10){

                hex += ('0' + (rem));

            }else{

                hex += ('a' + (rem%10));

            }

            num1 = num1 / base;

        }

		// reverse the string, because we were appending in the opposite direction (at the end)

        reverse(hex.begin(), hex.end()); 

		

        return hex;

    }
