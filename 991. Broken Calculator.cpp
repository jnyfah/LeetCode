class Solution {
public:
    int brokenCalc(int X, int Y) {
        int res = 0;
        while (Y > X) {
            
            if (Y % 2) 
                Y++;
            
            else 
                Y /= 2;
            
            res++;
        }
        return res + X - Y;
    }
};
