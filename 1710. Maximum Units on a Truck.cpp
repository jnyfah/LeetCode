class Solution {
public:
 static bool sortcol( const vector<int>& v1, const vector<int>& v2 ) {
        return v1[1] > v2[1];
}
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
         sort(boxTypes.begin(), boxTypes.end(),sortcol);
        
        int count = 0, res = 0 ;
        
        for(int i = 0; i<boxTypes.size(); i++) {
            
            if(count < truckSize) {

              if(boxTypes[i][0] < (truckSize- count)) {
                  
                count += boxTypes[i][0];
                  
                res += (boxTypes[i][0] * boxTypes[i][1]);
                  
              } else {
                  
                   res += ((truckSize - count) * boxTypes[i][1]);
                  
                   count+=(truckSize-count);
              }
            } else {
                
              break;
            }
        }
        return res;
    }
};
