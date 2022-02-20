class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0;
        char current = 'N';
        
        for (int i = 0; i<instructions.size(); i++) {
            if(instructions[i] == 'G') {
                if(current == 'N') {
                    y += 1;
                }else if(current == 'S') {
                    y += -1;
                }else if(current == 'E') {
                    x += 1;
                }else if(current == 'W') {
                    x += -1;
                }
            } else {
                char next = instructions[i];
                if(current == 'N') {
                    if(next == 'L') {
                        current = 'W';
                    }else {
                        current = 'E';
                    }
                }else if(current == 'S') {
                    if(next == 'L') {
                        current = 'E';
                    }else {
                        current = 'W';
                    }
                }else if(current == 'E') {
                    if(next == 'L') {
                        current = 'N';
                    }else {
                        current = 'S';
                    }
                }else if(current == 'W') {
                    if(next == 'L') {
                        current = 'S';
                    }else {
                        current = 'N';
                    }
                }
                
            }
        }
        
        return ( (x == 0 && y ==0) || current != 'N');
    }
};
