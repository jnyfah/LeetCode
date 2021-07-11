class MedianFinder {
    private:
    std::multiset<int>medianList;
    double mid;
    
public:
    /** initialize your data structure here. */
    MedianFinder() {
        medianList.clear();
    }
    
    void addNum(int num) {
      medianList.insert(num); 
    }
    
    double findMedian() {
        
        auto itr = medianList.begin();
        std::advance(itr, medianList.size()/2);
        
        if(medianList.size()%2 == 0) {
             auto itr2 = itr;
            itr2--;
            mid = (double)(*itr + *itr2)/2;
        }else {
            mid = (double)(*itr);
        }
        
        return mid;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
