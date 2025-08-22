#include <bits/stdc++.h>

using namespace std;

namespace RealDream {
	typedef long long ll;
	
	int n, m, q;
	vector<vector<int>> a(105, vector<int>(105));
	
	int dfs(int x, int y) {
		static vector<vector<int>> maze(n + 1, vector<int>(m + 1, 0));
		static vector<vector<int>> block(n + 1, vector<int>(m + 1, 0));
		static vector<int> dx = {0, -1, 1, 0, 0};
		static vector<int> dy = {0, 0, 0, -1, 1};
		if (x < 1 || x > n || y < 1 || y > m) return 0;
		if (block[x][y] == 1) return maze[x][y] = -1;
		if (block[x][y] == 2) return maze[x][y];
		block[x][y] = 1;
		int dir = a[x][y];
		int nx = x + dx[dir], ny = y + dy[dir];
		int next = dfs(nx, ny);
		if (next == -1) maze[x][y] = -1;
		else maze[x][y] = next + 1;
		block[x][y] = 2;
		return maze[x][y];
	}
	
	int main() {
		/**
		 * RealDream AK IOI
		 */
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);
		cin >> n >> m >> q;
		for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) cin >> a[i][j];
		while (q--) {
			int x, y;
			cin >> x >> y;
			cout << dfs(x, y) << endl;
		}
		return 0;
	}
};

int main() {
	/**
	 * Made By RealDream
	 */
	RealDream::main();
	return 0;
}
