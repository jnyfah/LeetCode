class Solution {
  public:
    bool isPowerOfFour(int num) {

      if (num <= 0) {
        return false;
      } else if (num == 1) {
        return true;
      } else {

        return !(num & (num - 1)) && (num % 3 == 1);
      }

    }
};
