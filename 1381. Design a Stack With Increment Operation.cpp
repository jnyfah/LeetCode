class CustomStack {
public:
    int * m_array;
    int m_maxSize;
    int m_count;
    
    CustomStack(int maxSize) : 
        m_array(new int[maxSize]),
        m_maxSize(maxSize),
        m_count(0) {
        
    }
    
    void push(int x) {
        if (m_count < m_maxSize) {
            m_array[m_count++] = x;
        }
    }
    
    int pop() {
        int ret = -1;
        if (m_count > 0) {
            ret = m_array[--m_count];
        }
        return ret;
    }
    
    void increment(int k, int val) {
        const int upperBound = min(m_count, k);
        for (int i = 0; i < upperBound; ++i) {
            m_array[i] += val;
        }
    }
};
