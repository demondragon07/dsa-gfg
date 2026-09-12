class Solution {
	public:
	bool check(int i, int j, int row, int col) {
		return (i>-1 && i<row) && (j>-1 && j<col);
	}
	int shortestPath(vector<vector<int>> &mat, vector<int> &src, vector<int> &dest) {
		int row[4] = {-1, 1, 0, 0};
		int col[4] = {0, 0, -1, 1};
		int n = mat.size();
		int m = mat[0].size();
		
		queue<pair<pair<int, int>, int>> q;
		int step = 0;
		if(mat[src[0]][src[1]]==0 || mat[dest[0]][dest[1]]==0) return -1;
		q.push({{src[0], src[1]}, step});
		mat[src[0]][src[1]]=0;
		while (!q.empty()) {
			    auto x = q.front();
				int i = x.first.first;
				int j = x.first.second;
				step=x.second;
				if(i==dest[0] && j==dest[1]) return step;
				q.pop();
				for (int k = 0; k<4; k++) {
					if (check(i + row[k], j + col[k], n, m) && mat[i + row[k]][j + col[k]] == 1) {
						q.push({{i + row[k], j + col[k]}, step + 1});
						mat[i + row[k]][j + col[k]] = 0;
					}
				}
		     }
		return - 1;
	}
};
