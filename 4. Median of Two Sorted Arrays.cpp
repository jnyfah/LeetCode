class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         std::vector<int>m_vec;
   double median;

   m_vec.insert(m_vec.begin(), nums1.begin(), nums1.end());
   m_vec.insert(m_vec.end(), nums2.begin(), nums2.end());
   std::sort(m_vec.begin(), m_vec.end());

   if(m_vec.size()%2 == 0){
      median = ((double)m_vec[m_vec.size()/2] + (double)m_vec[(m_vec.size()/2) -1])/2;
   }else{
     median = (double)m_vec[m_vec.size()/2];
   }
   return median;
    }
};
