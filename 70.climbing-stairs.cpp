/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if (n ==1) {
            int first = 1;
            int second = 2;
            for (int i = 3; i<= n; i++) {
                int third = first + second;
                first = second;
                second = third;
            }
            return second;
        }
    }
};
// @lc code=end

