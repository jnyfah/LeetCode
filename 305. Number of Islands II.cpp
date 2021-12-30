class UnionFind {
    public:
    int count = 0;
    vector<int> parents;
    UnionFind(int m, int n) {
        parents.resize(m * n);
        for(int i=0; i < m * n; ++i) parents[i] = i;
    }
    int find(int i) {
        return i == parents[i] ? i: find(parents[i]);
    }
    void unite(int i, int j) {
        int pi = find(i);
        int pj = find(j);
        if(pi != pj) {
            count++; // !!!
            parents[pi] = pj;
        }
    }
};

class Solution {
public:
    vector<int> numIslands2(int m, int n, vector<vector<int>>& positions) {
        vector<vector<int>> grid(m, vector<int>(n, 0));
        vector<int> ret;
        UnionFind uf = UnionFind(m, n);
        vector<vector<int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};
        int cnt = 0;
        for(int i = 0; i < positions.size(); i++) {
            int x = positions[i][0], y = positions[i][1];
            int cur = x * n + y;
            if(!grid[x][y]) cnt++;
            grid[x][y] = 1;
            for(int j = 0; j < dirs.size(); j++) {
                int xx = x + dirs[j][0];
                int yy = y + dirs[j][1];
                int next = xx * n + yy;
                if(xx >= 0 && xx < m && yy >= 0 && yy < n && grid[xx][yy]) uf.unite(cur, next);
            }
            ret.push_back(cnt - uf.count);
        }
        return ret;
    }
};
