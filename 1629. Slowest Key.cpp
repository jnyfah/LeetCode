class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int time = releaseTimes[0];
        int index =0;
        
        for(int i =1; i<releaseTimes.size(); i++) {
            int cur = releaseTimes[i] -releaseTimes[i-1];
            if(cur == time) {
                if(keysPressed[index] < keysPressed[i]) {
                    index = i;
                }
            }else if(cur > time ) {
                index =i;
                time = cur;
            }
        }
        return keysPressed[index];
    }
};
