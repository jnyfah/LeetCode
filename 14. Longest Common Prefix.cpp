class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if( strs.size() == 0) return "";
        string s = strs[0];
        for( int i=1; i<strs.size() ; i++)
        {
            int n = s.length() < strs[i].length() ? s.length() : strs[i].length() ;
            for( int j = 0; j<n ; j++ )
            {
                if( s[j] != strs[i][j] )
                {
                    s = s.substr(0,j);
                    break;
           substr     }
            }
            s = s.substr(0,n);
        }
        return s;
    }
}
