#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    
    Difference(vector<int> a) {
        elements = a;
    }
	// Add your code here
    void computeDifference() {

        int n=elements.size();
        int min=100;
        int max=1;

        for(int i=0;i<n;++i) {
            if(elements[i]<min){min=elements[i];}
            if(elements[i]>max){max=elements[i];}
        }
        maximumDifference=max-min;
}

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
