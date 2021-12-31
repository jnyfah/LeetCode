class Solution {
public:
    
    string ones[21] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen", "Twenty"};
    
    string tens[10] = {"##", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    
    string pref[4] = {"##", "Thousand", "Million", "Billion"};
    
    const int billion = 1000000000;
    const int million = 1000000;
    const int thousand = 1000;
    
    string oneDigit(int num) {
        return ones[num] + " ";
    }
    
    string numberToWords(int num) {
        if(num == 0)
            return "Zero";
        string ans = convert(num);
        ans.pop_back();
        return ans;
    }
    
    string convert(int num) {   
        if(num == 0)
            return "";
        if(num/billion)
            return threeDigit(num/billion) + "Billion " + convert(num%billion);
        if(num/million)
            return threeDigit(num/million) + "Million " + convert(num%million);
        if(num/thousand)
            return threeDigit(num/thousand) + "Thousand " + convert(num%thousand);
        return threeDigit(num);
    }
    
    string threeDigit(int num) {
        if(num == 0)
            return "";
        if(num / 10 == 0)
            return oneDigit(num);
        if(num / 100 == 0)
            return twoDigit(num);
        
        return ones[num/100] + " Hundred " + twoDigit(num%100);
    }
    
    string twoDigit(int num)
    {
        if(num == 0)
            return "";
        if(num <= 20)
            return ones[num] + " ";
        else
            return tens[num/10] + " " + (num % 10 ? ones[num%10] + " " : "");
    }
};
