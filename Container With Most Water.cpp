class Solution {
  public:
    int maxArea(vector < int > & height) {
      int i = 0, j = height.size() - 1, m_maxArea = INT_MIN;
      while (i < j) {
        if (height[i] > height[j]) {
          m_maxArea = max(m_maxArea, (height[j]) * (j - i));
          j--;
        } else {
          m_maxArea = max(m_maxArea, (height[i]) * (j - i));
          i++;
        }
      }

      return m_maxArea;
    }
};
