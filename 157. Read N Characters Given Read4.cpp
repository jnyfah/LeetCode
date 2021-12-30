/**
 * The read4 API is defined in the parent class Reader4.
 *     int read4(char *buf4);
 */

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Number of characters to read
     * @return    The number of actual characters read
     */
    int read(char *buf, int n) {
        int total = 0, readchars = 4;
        char buf4[4];
        
        while(total < n && readchars == 4) {
           readchars = read4(buf4);
           for(int i = 0; i< readchars; i++) {
               if(total == n) {
                   return total;
               }
               buf[total] = buf4[i];
               total++;
           }
        }
        return total;
    }
};
