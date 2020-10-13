class Solution {
public:
    string intToRoman(int num) {
        
        std::string result;
        
        std::array<std::string, 10> ones = {"", "I", "II", "III", "IV", "V", "VI","VII", "VIII", "IX"};
    std::array<std::string, 10> tens = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    std::array<std::string, 10> huns = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    std::array<std::string, 10> thous = {"", "M", "MM", "MMM"};


        if (num < 10) {
      result = ones[num];

    } else if (num < 100) {
      result = tens[num / 10] + (num % 10 != 0 ? intToRoman(num % 10) : "");

    } else if (num < 1000) {
      result = huns[num / 100] + (num % 100 != 0 ? intToRoman(num % 100) : "");

    } else if (num < 5000) {
      result = thous[num / 1000] + (num % 1000 != 0 ? intToRoman(num % 1000) : "");
    }

    return result;

    }
    };
