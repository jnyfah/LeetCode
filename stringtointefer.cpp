class Solution {
  public:
    int myAtoi(string str) {
      int i = 0, res = 0, sign = 1;
      while (i < str.size() && str[i] == ' ') {
        i++;
      }
      if (i < str.size() and str[i] == '-' ||
        str[i] == '+') {
        sign = str[i++] == '-' ? -1 : 1;
      }
      while (i < str.size() && isdigit(str[i])) {
        if ((res > (INT_MAX / 10)) || ((res * 10) > (INT_MAX - (str[i] - '0'))))
          return sign == 1 ? INT_MAX : INT_MIN;
        res = (res * 10) + (str[i++] - '0');
      }
      return (sign * res);
    }
};
