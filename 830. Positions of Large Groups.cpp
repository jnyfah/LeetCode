class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> vRes;
	int start = 0, end = 0;
	for (int i = 1; i < S.size(); i++) {
		if (S[i] == S[i - 1])
			end++;
		if (S[i] != S[i - 1] || i == S.size() - 1) {
			if (end - start >= 2)
				vRes.push_back( { start, end } );
			start = end = i;
		}
	}
	return vRes;
    }
};
